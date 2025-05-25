--Part – A:
CREATE TABLE EMP(
	EID INT,
	ENAME VARCHAR(50),
	DEPARTMENT VARCHAR(50),
	SALARY INT,
	JOININGDATE DATETIME,
	CITY VARCHAR(50)
);

INSERT INTO EMP VALUES(101 , 'RAHUL', 'ADMIN', 56000, '1990-JAN-01', 'RAJKOT');
INSERT INTO EMP VALUES(102 , 'HARDIK', 'IT', 18000, '1990-SEP-25', 'AHMEDABAD');
INSERT INTO EMP VALUES(103 , 'BHAVIN', 'HR', 25000, '1991-MAY-14', 'BARODA');
INSERT INTO EMP VALUES(104 , 'BHOOMI', 'ADMIN', 39000, '1991-FEB-08', 'RAJKOT');
INSERT INTO EMP VALUES(105 , 'ROHIT', 'IT', 17000, '1990-JUL-23', 'JAMNAGAR');
INSERT INTO EMP VALUES(106 , 'PRIYA', 'IT', 9000, '1990-OCT-18', 'AHMEDABAD');
INSERT INTO EMP VALUES(107 , 'BHOOMI', 'HR', 34000, '1991-DEC-25', 'RAJKOT');

SELECT * FROM EMP

--1. Display the Highest, Lowest Label the columns Maximum, Minimum respectively.
SELECT MAX(SALARY) AS MAXIMUM , MIN(SALARY) AS MINIMUM FROM EMP
--2. Display Total, and Average salary of all employees. Label the columns Total_Sal and Average_Sal, respectively.
SELECT SUM(SALARY) AS TOTAL_SAL , AVG(SALARY) AS AVERAGE_SAL FROM EMP
--3. Find total number of employees of EMPLOYEE table.
SELECT COUNT(ENAME) FROM EMP
--4. Find highest salary from Rajkot city.
SELECT MAX(SALARY) AS MAX_SAL FROM EMP WHERE CITY='RAJKOT'
--5. Give maximum salary from IT department.
SELECT MAX(SALARY) AS MAX_SAL FROM EMP WHERE DEPARTMENT='IT'
--6. Count employee whose joining date is after 8-feb-91.
SELECT COUNT(ENAME) AS EMPLOYEE_NAME FROM EMP WHERE JOININGDATE>'8-FEB-91'
--7. Display average salary of Admin department.SS
SELECT AVG(SALARY) AS AVG_SAL FROM EMP WHERE DEPARTMENT='ADMIN'
--8. Display total salary of HR department.
SELECT SUM(SALARY) AS TOTAL_SAL FROM EMP WHERE DEPARTMENT='HR'
--9. Count total number of cities of employee without duplication.
SELECT COUNT(DISTINCT CITY) AS TOTAL_CITY FROM EMP
--10. Count unique departments.
SELECT COUNT(DISTINCT DEPARTMENT) AS TOTAL_DEPARTMENT FROM EMP
--11. Give minimum salary of employee who belongs to Ahmedabad.
SELECT MIN(SALARY) AS MIN_SAL FROM EMP WHERE CITY='AHMEDABAD'
--12. Find city wise highest salary.
SELECT CITY, MAX(SALARY) AS MAX_SAL FROM EMP GROUP BY CITY
--13. Find department wise lowest salary.
SELECT DEPARTMENT, MIN(SALARY) AS MIN_SAL FROM EMP GROUP BY DEPARTMENT
--14. Display city with the total number of employees belonging to each city.
SELECT CITY, COUNT(ENAME) AS TOTAL_EMPLOYEE FROM EMP GROUP BY CITY
--15. Give total salary of each department of EMP table.
SELECT DEPARTMENT,SUM(SALARY) AS TOTAL_SALARY FROM EMP GROUP BY DEPARTMENT
--16. Give average salary of each department of EMP table without displaying the respective department name.
SELECT AVG(SALARY) AS AVG_SALARY FROM EMP GROUP BY DEPARTMENT

--Part – B:
--1. Count the number of employees living in Rajkot.
SELECT COUNT(ENAME) AS NO_OF_EMP FROM EMP WHERE CITY='RAJKOT'
--2. Display the difference between the highest and lowest salaries. Label the column DIFFERENCE.
SELECT MAX(SALARY)-MIN(SALARY) AS DIFFERENCE FROM EMP
--3. Display the total number of employees hired before 1st January, 1991.
SELECT COUNT(ENAME) FROM EMP WHERE JOININGDATE<'1991-1-1' 

--Part – C:
--1. Count the number of employees living in Rajkot or Baroda.
SELECT COUNT(ENAME) AS EMP_COUNT FROM EMP WHERE CITY IN ('RAJKOT','BARODA')
--2. Display the total number of employees hired before 1st January, 1991 in IT department.
SELECT COUNT(ENAME) FROM EMP WHERE JOININGDATE<'1991-1-1' AND DEPARTMENT='IT'
--3. Find the Joining Date wise Total Salaries.
SELECT SUM(SALARY) AS TOTAL_SALARY FROM EMP GROUP BY JOININGDATE
--4. Find the Maximum salary department & city wise in which city name starts with ‘R’.SELECT DEPARTMENT,CITY,MAX(SALARY) AS MAX_SALARY FROM EMP GROUP BY DEPARTMENT,CITY HAVING CITY LIKE 'R%'