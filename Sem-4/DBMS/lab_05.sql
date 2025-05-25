-- Creating PersonInfo Table
CREATE TABLE PersonInfo (
 PersonID INT PRIMARY KEY,
 PersonName VARCHAR(100) NOT NULL,
 Salary DECIMAL(8,2) NOT NULL,
 JoiningDate DATETIME NULL,
 City VARCHAR(100) NOT NULL,
 Age INT NULL,
 BirthDate DATETIME NOT NULL
);
-- Creating PersonLog Table
CREATE TABLE PersonLog (
 PLogID INT PRIMARY KEY IDENTITY(1,1),
 PersonID INT NOT NULL,
 PersonName VARCHAR(250) NOT NULL,
 Operation VARCHAR(50) NOT NULL,
 UpdateDate DATETIME NOT NULL,
);

drop table PersonInfo
drop table PersonLog

--Part – A
--1. Create a trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo table to display a message “Record is Affected.”
CREATE OR ALTER TRIGGER TRIGGER_OPERATION
ON PersonInfo
AFTER INSERT, UPDATE, DELETE
AS 
BEGIN
	PRINT('Record is Affected')
END

--2. Create a trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo table. For that, log all operations performed on the person table into PersonLog.
--INSERT
CREATE OR ALTER TRIGGER PersonLog_Trigger_Insert
ON PersonInfo
AFTER INSERT
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM INSERTED
	SELECT @NAME = PersonName FROM INSERTED

	INSERT INTO PersonLog values(@ID,@NAME,'INSERT',GETDATE())
END

INSERT INTO PersonInfo VALUES(5,'JEVIN',122,'2006-1-29','RAJKOT',19,'2006-1-29')

--UPDATE
CREATE OR ALTER TRIGGER PersonLog_Trigger_Update
ON PersonInfo
AFTER UPDATE
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM INSERTED
	SELECT @NAME = PersonName FROM INSERTED

	INSERT INTO PersonLog values(@ID,@NAME,'UPDATE',GETDATE())
END

UPDATE PersonInfo
SET Salary = 121
WHERE PersonID = 1

--DELETE
CREATE OR ALTER TRIGGER PersonLog_Trigger_Delete
ON PersonInfo
AFTER DELETE
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM DELETED
	SELECT @NAME = PersonName FROM DELETED

	INSERT INTO PersonLog values(@ID,@NAME,'DELETE',GETDATE())
END

DELETE FROM PersonInfo WHERE PersonID = 1

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

--3. Create an INSTEAD OF trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo table. For that, log all operations performed on the person table into PersonLog.
--INSERT
drop trigger PersonLog_InstedOf_Trigger_Insert
CREATE OR ALTER TRIGGER PersonLog_InstedOf_Trigger_Insert
ON PersonInfo
INSTEAD OF INSERT
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM INSERTED
	SELECT @NAME = PersonName FROM INSERTED

	INSERT INTO PersonLog values(@ID,@NAME,'INSERT',GETDATE())
END

INSERT INTO PersonInfo VALUES(3,'JEVIN',122,'2006-1-29','RAJKOT',19,'2006-1-29')

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

--UPDATE
CREATE OR ALTER TRIGGER PersonLog_InstedOf_Trigger_Update
ON PersonInfo
INSTEAD OF UPDATE
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM INSERTED
	SELECT @NAME = PersonName FROM INSERTED

	INSERT INTO PersonLog values(@ID,@NAME,'UPDATE',GETDATE())
END

UPDATE PersonInfo
SET Salary = 121
WHERE PersonID = 3

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

--DELETE
CREATE OR ALTER TRIGGER PersonLog_InstedOf_Trigger_Delete
ON PersonInfo
INSTEAD OF DELETE
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)
	DECLARE @OPERATION VARCHAR(50)
	DECLARE @UPDATETIME DATETIME

	SELECT @ID = PersonId FROM DELETED
	SELECT @NAME = PersonName FROM DELETED

	INSERT INTO PersonLog values(@ID,@NAME,'DELETE',GETDATE())
END

DELETE FROM PersonInfo WHERE PersonID = 3

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

--4. Create a trigger that fires on INSERT operation on the PersonInfo table to convert person name into uppercase whenever the record is inserted.
CREATE OR ALTER TRIGGER PersonInfo_UPPECASE
ON PersonInfo
AFTER INSERT
AS
BEGIN
	DECLARE @ID INT
	DECLARE @NAME VARCHAR(250)

	SELECT @ID = PersonId FROM INSERTED
	SELECT @NAME = PersonName FROM INSERTED

	UPDATE PersonInfo
	SET PersonName = UPPER(@NAME)
	WHERE PersonID = @ID
END

INSERT INTO PersonInfo VALUES(4,'jevin',122,'2006-1-29','RAJKOT',19,'2006-1-29')

SELECT * FROM PersonInfo

--5. Create trigger that prevent duplicate entries of person name on PersonInfo table.
CREATE OR ALTER TRIGGER Person_Deplicate
ON PersonInfo
INSTEAD OF INSERT
AS 
BEGIN
	INSERT INTO PersonInfo (PersonID, PersonName, Salary, JoiningDate, City, Age, BirthDate)
	SELECT PersonID, PersonName, Salary, JoiningDate, City, Age, BirthDate FROM INSERTED
	WHERE PersonName NOT IN (SELECT PersonName FROM PersonInfo)
END

INSERT INTO PersonInfo VALUES(3,'jevin',122,'2006-1-29','RAJKOT',19,'2006-1-29')

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

drop trigger Person_Deplicate

--6. Create trigger that prevent Age below 18 years.
CREATE OR ALTER TRIGGER Person_Age_18
ON PersonInfo
INSTEAD OF INSERT
AS 
BEGIN
	INSERT INTO PersonInfo (PersonID, PersonName, Salary, JoiningDate, City, Age, BirthDate)
	SELECT PersonID, PersonName, Salary, JoiningDate, City, Age, BirthDate FROM INSERTED
	WHERE Age >= 18
END

INSERT INTO PersonInfo VALUES(3,'jevin',122,'2006-1-29','RAJKOT',19,'2006-1-29')

SELECT * FROM PersonInfo
SELECT * FROM PersonLog

--Part – B
--7. Create a trigger that fires on INSERT operation on person table, which calculates the age and update that age in Person table.
CREATE OR ALTER TRIGGER Age_Update
ON PersonInfo
AFTER INSERT
AS
BEGIN
	DECLARE @DATE DATETIME, @ID INT
	SELECT @DATE = BirthDate, @ID = PersonID FROM INSERTED
	UPDATE PersonInfo 
	SET Age = (DATEDIFF(YEAR, @DATE,GETDATE())) WHERE @ID = PersonID
END

INSERT INTO PersonInfo VALUES(5,'jevin',122,'2006-1-29','RAJKOT',250,'2006-1-29')

SELECT * FROM PersonInfo

--8. Create a Trigger to Limit Salary Decrease by a 10%.
CREATE OR ALTER TRIGGER Salary_Update
ON PersonInfo
AFTER UPDATE
AS
BEGIN
	DECLARE @NSALARY DECIMAL(8,2), @OSALARY DECIMAL(8,2)
	SELECT @OSALARY = d.Salary, @NSALARY = i.Salary
	FROM DELETED d
	JOIN INSERTED i ON d.PersonID = i.PersonID

	IF @NSALARY < @OSALARY*0.9
		BEGIN
			UPDATE PersonInfo
			SET Salary = @OSALARY
			WHERE PersonID IN (SELECT PersonID FROM INSERTED)
		END
END

UPDATE PersonInfo
SET Salary = 120
WHERE PersonID = 1

SELECT * FROM PersonInfo

--Part – C
--9. Create Trigger to Automatically Update JoiningDate to Current Date on INSERT if JoiningDate is NULL during an INSERT.
CREATE or ALTER TRIGGER Update_Date
ON PersonInfo
AFTER INSERT
AS BEGIN
	DECLARE @JDATE DATETIME
	SELECT JDATE = JoiningDate FROM INSERTED
	DECLARE @PID INT
	SELECT @PID = PersonID FROM INSERTED
	IF @JDATE IS NULL
	BEGIN
		UPDATE PersonInfo SET JoiningDate = GETDATE()
		WHERE PersonID = @PID
	END
END

INSERT INTO PersonInfo VALUES(8,'jevin',122,NULL,'RAJKOT',250,'2006-1-29')

SELECT * FROM PersonInfo

--10. Create DELETE trigger on PersonLog table, when we delete any record of PersonLog table it prints ‘Record deleted successfully from PersonLog’.
CREATE OR ALTER TRIGGER Delete_PersonLog
ON PersonLog
AFTER DELETE
AS 
BEGIN
	PRINT 'Record deleted successfully from PersonLog'
END