-- Create Department Table
CREATE TABLE Department (
 DepartmentID INT PRIMARY KEY,
 DepartmentName VARCHAR(100) NOT NULL UNIQUE
);

--Insert
CREATE OR ALTER PROC PR_DEPARTMENT_INSERT
	@DepartmentID INT,
	@DepartmentName VARCHAR(50)
AS
BEGIN
	insert into Department values (@DepartmentID, @DepartmentName)
END

--Update
CREATE OR ALTER PROC PR_DEPARTMENT_UPDATE
	@DepartmentID INT,
	@DepartmentName VARCHAR(50)
AS
BEGIN
	Update Department 
	SET DepartmentId = @DepartmentID, DepartmentName = @DepartmentName
	where DepartmentID = @DepartmentID
END

--Delete
CREATE OR ALTER PROC PR_DEPARTMENT_DELETE
	@DepartmentID INT
AS
BEGIN
	Delete from Department 
	where DepartmentID = @DepartmentID
END

--Select by primary key
CREATE OR ALTER PROC PR_DEPARTMENT_SELECTBYPKEY
	@DepartmentID INT
AS
BEGIN
	Select * from Department 
	where DepartmentID = @DepartmentID
END

EXECUTE PR_DEPARTMENT_INSERT 1,'Admin'
EXECUTE PR_DEPARTMENT_INSERT 2,'IT'
EXECUTE PR_DEPARTMENT_INSERT 3,'HR'
EXECUTE PR_DEPARTMENT_INSERT 4,'Account'

--------------------------------------------------------------------------

-- Create Designation Table
CREATE TABLE Designation (
 DesignationID INT PRIMARY KEY,
 DesignationName VARCHAR(100) NOT NULL UNIQUE
);

 --Insert
CREATE OR ALTER PROC PR_DESIGNATION_INSERT
	@DesignationID INT,
	@DesignationName VARCHAR(100)
AS
BEGIN
	insert into Designation values (@DesignationID, @DesignationName)
END

--Update
CREATE OR ALTER PROC PR_DESIGNATION_UPDATE
	@DesignationID INT,
	@DesignationName VARCHAR(100)
AS
BEGIN
	Update Designation 
	SET DesignationID = @DesignationID, DesignationName = @DesignationID
	where DesignationID = DesignationID
END

--Delete
CREATE OR ALTER PROC PR_DESIGNATION_DELETE
	@DesignationID Int
AS
BEGIN
	Delete from Designation 
	where DesignationID = @DesignationID
END

--Select by primary key
CREATE OR ALTER PROC PR_DESIGNATION_SELECTBYPKEY
	@DesignationID Int
AS
BEGIN
	Select * from Designation 
	where DesignationID = @DesignationID
END

EXECUTE PR_DESIGNATION_INSERT 11,'Jobber'
EXECUTE PR_DESIGNATION_INSERT 12,'Welder'
EXECUTE PR_DESIGNATION_INSERT 13,'Clerk'
EXECUTE PR_DESIGNATION_INSERT 14,'Manager'
EXECUTE PR_DESIGNATION_INSERT 15,'CEO'

--------------------------------------------------------------------------

-- Create Person Table
CREATE TABLE Person (
 PersonID INT PRIMARY KEY IDENTITY(101,1),
 FirstName VARCHAR(100) NOT NULL,
 LastName VARCHAR(100) NOT NULL,
 Salary DECIMAL(8, 2) NOT NULL,
 JoiningDate DATETIME NOT NULL,
 DepartmentID INT NULL,
 DesignationID INT NULL,
 FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID),
 FOREIGN KEY (DesignationID) REFERENCES Designation(DesignationID)
);

--Insert
CREATE OR ALTER PROC PR_PERSON_INSERT
	@FirstName Varchar (100),
	@LastName Varchar (100),
	@Salary Decimal (8,2),
	@JoiningDate Datetime,
	@DepartmentID Int,
	@DesignationID Int
AS
BEGIN
	insert into Person values (@FirstName, @LastName, @Salary, @JoiningDate, @DepartmentID, @DesignationID)
END

--Update
CREATE OR ALTER PROC PR_PERSON_UPDATE
	@PersonID Int,
	@FirstName Varchar (100),
	@LastName Varchar (100),
	@Salary Decimal (8,2),
	@JoiningDate Datetime,
	@DepartmentID Int,
	@DesignationID Int
AS
BEGIN
	Update Person 
	SET FirstName = @FirstName, LastName = @LastName, Salary = @Salary, JoiningDate = @JoiningDate, DepartmentID = @DepartmentID, DesignationID = @DesignationID
	where PersonID = @PersonID
END

--Delete
CREATE OR ALTER PROC PR_PERSON_DELETE
	@PersonID Int
AS
BEGIN
	Delete from Person 
	where PersonID = @PersonID
END

--Select by primary key
CREATE OR ALTER PROC PR_PERSON_SELECTBYPKEY
	@PersonID Int
AS
BEGIN
	Select * from Person 
	where PersonID = @PersonID
END

EXECUTE PR_PERSON_INSERT 'Rahul', 'Anshu', 56000, '1990-01-01', 1, 12
EXECUTE PR_PERSON_INSERT 'Hardik', 'Hinsu', 18000, '1990-09-25', 2, 11
EXECUTE PR_PERSON_INSERT 'Bhavin', 'Kamani', 25000, '1991-5-14', NULL, 11
EXECUTE PR_PERSON_INSERT 'Bhoomi', 'Patel', 39000, '2024-02-20', 1, 13
EXECUTE PR_PERSON_INSERT 'Rohit', 'Rajgor', 17000, '1990-07-23', 2, 15
EXECUTE PR_PERSON_INSERT 'Priya', 'Mehta', 25000, '1990-10-18', 2, NULL
EXECUTE PR_PERSON_INSERT 'Neha', 'Trivedi', 18000, '2014-02-20', 3, 15

--3. Join if foreign key is available
CREATE OR ALTER PROC PR_JOIN
	@PersonID INT
AS
BEGIN
	Select dept.DepartmentName, desig.DesignationName, concat(per.FirstName , ' ', per.LastName) as FullName, per.Salary
	from Person per
	Join Department dept on dept.DepartmentID = per.DepartmentID
	Join Designation desig on desig.DesignationID = per.DesignationID
	where PersonID = @PersonID
END

EXEC PR_JOIN 101

--4. Select Top 3 from Person
CREATE OR ALTER PROC PR_TOP3
AS
BEGIN
	Select Top 3 * from Person
END

EXEC PR_TOP3

-- Part – B 
-- 5. Create a Procedure that takes the department name as input and returns a table with all workers working in that department.
CREATE OR ALTER PROC PR_WORKER
	@DepartmentName varchar(100)
AS
BEGIN
	Select p.*, d.* from Person p
	Join Department d
	on	p.DepartmentID = d.DepartmentID
	where d.DepartmentName = @DepartmentName
END

EXEC PR_WORKER 'IT'

-- 6. Create Procedure that takes department name & designation name as input and returns a table with worker’s first name, salary, joining date & department name. 
CREATE OR ALTER PROC PR_DEPT_DESIG
	@DepartmentName varchar(100),
	@DesignationName varchar(100)
AS
BEGIN
	Select p.FirstName, p.Salary, p.JoiningDate, dept.DepartmentName from Person p
	Join Department dept
	on dept.DepartmentID = p.DepartmentID
	Join Designation desig
	on desig.DesignationID = p.DesignationID
	where dept.DepartmentName = @DepartmentName and desig.DesignationName = @DesignationName
END

EXEC PR_DEPT_DESIG 'IT', 'CEO'

-- 7. Create a Procedure that takes the first name as an input parameter and display all the details of the worker with their department & designation name. 
CREATE OR ALTER PROC PR_FNAME
	@Fname varchar(50)
AS
BEGIN
	Select p.*, dept.DepartmentName, desig.DesignationName from Person p
	Join Department dept
	on dept.DepartmentID = p.DepartmentID
	Join Designation desig
	on desig.DesignationID = p.DesignationID
	where p.FirstName = @Fname
END

EXEC PR_FNAME 'RAHUl'

-- 8. Create Procedure which displays department wise maximum, minimum & total salaries.
CREATE OR ALTER PROC PR_DEPT
AS
BEGIN
	Select d.DepartmentName, MAX(Salary) as MAX_SALARY, MIN(Salary) as MIN_SALARY, SUM(Salary) as Total_Salary
	from Person p
	Join DEpartment d 
	on d.DepartmentID = p.DepartmentID
	Group by DepartmentName
END

EXEC PR_DEPT

-- 9. Create Procedure which displays designation wise average & total salaries.
CREATE OR ALTER PROC PR_DESIG
AS
BEGIN
	Select desig.DesignationName, AVG(Salary) as AVERAGE_SALARY, SUM(Salary) as Total_Salary
	from Designation desig
	Join Person p
	on p.DesignationId = desig.DesignationID
	Group by DesignationName
END

EXEC PR_DESIG

-- Part – C 
-- 10. Create Procedure that Accepts Department Name and Returns Person Count.
CREATE OR ALTER PROC PR_COUNT
	@DeptName INT,
	@count INT OUTPUT
AS
BEGIN
	Select @count = count(p.PersonID) from Person p
	Join Department d
	on d.DepartmentID = p.DepartmentID
	where d.DepartmentName = @DeptName
END

Declare @count INT
EXEC PR_COUNT 'IT', @count OUTPUT
Select @count

-- 11. Create a procedure that takes a salary value as input and returns all workers with a salary greater than input salary value along with their department and designation details.
CREATE OR ALTER PROC PR_SALARY
	@salary DECIMAL(8,2)
AS
BEGIN
	Select dept.*, desig.*, Salary from Person p
	Join Department dept
	on dept.DepartmentID = p.DepartmentID
	Join Designation desig
	on desig.DesignationID = p.DesignationID
	where p.Salary > @salary
END

EXEC PR_SALARY 1800

-- 12. Create a procedure to find the department(s) with the highest total salary among all departments.
CREATE OR ALTER PROC PR_HIGHEST_SALARY_DEPARTMENT
AS
BEGIN
	SELECT d.DepartmentName, SUM(p.Salary) AS TotalSalary
    FROM Department d
    JOIN Person p 
	ON d.DepartmentID = p.DepartmentID
    GROUP BY d.DepartmentName
    HAVING 
        SUM(p.Salary) = (
            SELECT MAX(TotalSalary)
            FROM (
                SELECT SUM(p.Salary) AS TotalSalary
                FROM Department d
                JOIN Person p 
				ON d.DepartmentID = p.DepartmentID
                GROUP BY d.DepartmentID
            ) AS SubQuery
        );
END

EXEC PR_HIGHEST_SALARY_DEPARTMENT

-- 13. Create a procedure that takes a designation name as input and returns a list of all workers under that designation who joined within the last 10 years, along with their department.
CREATE OR ALTER PROC PR_DESIGNATION_SELECT
	@DesigName varchar(100)
AS
BEGIN
	Select concat(p.FirstName, ' ', p.LastName) as FullName, dept.DepartmentName, desig.DesignationName
	from Person p
	Join Department dept
	on dept.DepartmentID = p.DepartmentID
	Join Designation desig
	on desig.DesignationID = p.DesignationID
	where 
		desig.DesignationName = @DesigName 
		and
		DATEDIFF(YEAR, p.JoiningDate, GETDATE()) > 10
END

EXEC PR_DESIGNATION_SELECT 'Jobber'

-- 14. Create a procedure to list the number of workers in each department who do not have a designation assigned.
CREATE OR ALTER PROC PR_WORKERS_WITHOUT_DESIGNATION
AS
BEGIN
	Select dept.DepartmentName, count(p.PersonID) AS WorkersWithoutDesignation 
	from Department dept
	Join Person p
	on p.DepartmentID = dept.DepartmentID
	where p.DesignationID IS NULL
	Group by dept.DepartmentName
END

EXEC PR_WORKERS_WITHOUT_DESIGNATION

-- 15. Create a procedure to retrieve the details of workers in departments where the average salary is above 12000.
CREATE OR ALTER PROC PR_AVERAGE_SALARY_DEPARTMENT
AS
BEGIN
	SELECT p.*, d.DepartmentName
    from Person p 
    Join Department d
	ON d.DepartmentID = p.DepartmentID
	where d.DepartmentID IN (Select DepartmentID from Person Group by DepartmentID having AVG(Salary)>25000)
END

EXEC PR_AVERAGE_SALARY_DEPARTMENT
