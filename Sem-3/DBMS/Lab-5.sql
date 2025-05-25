--Part – A:
--Create following table using query according to the definition.
CREATE TABLE STUDENTS (
	STUID INT,
	FIRSTNAME VARCHAR(25),
	LASTNAME VARCHAR(25),
	WEBSITE VARCHAR(50),
	CITY VARCHAR(25),
	ADDRESS VARCHAR(100)
);
INSERT INTO STUDENTS VALUES(1011,'KEYUR','PATEL','TECHONTHENET.COM','RAJKOT','A-303 ''VASANT KUNJ'',Rajkot')
INSERT INTO STUDENTS VALUES(1022,'HARDIK','SHAH','DIGMINECRAFT.COM','AHMEDABAD','"RAM KRUPA", RAIYA ROAD')
INSERT INTO STUDENTS VALUES(1033,'KAJAL','TRIVEDI','BIGACTIVITIES.COM','BARODA','RAJ BHAVAN PLOT, NEAR GARDER')
INSERT INTO STUDENTS VALUES(1014,'BHOOMI','GAJERA','CHECKYOURMATH.COM','AHMEDABAD','"JIG''S HOME", NAROL')
INSERT INTO STUDENTS VALUES(1055,'HARMIT','MITAL','@ME.DARSHAN.COM','RAJKOT','B-55, RAJ RESIDENCY')
INSERT INTO STUDENTS VALUES(1066,'ASHOK','JANI',NULL,'BARODA','A502, CLUB HOUSE BUILDING')

--From the above given tables perform the following queries (LIKE Operation):
--1. Display the name of students whose name starts with ‘K’.
SELECT FIRSTNAME FROM STUDENTS WHERE FIRSTNAME LIKE 'K%'
--2. Display the name of students whose name consists of five characters.
SELECT FIRSTNAME FROM STUDENTS WHERE FIRSTNAME LIKE '_____'
--3. Retrieve the first name & last name of students whose city name ends with a & contains six characters.
SELECT FIRSTNAME,LASTNAME FROM STUDENTS WHERE CITY LIKE '_____%A'
--4. Display all the students whose last name ends with ‘tel’.
SELECT * FROM STUDENTS WHERE LASTNAME LIKE '%TEL'
--5. Display all the students whose first name starts with ‘ha’ & ends with‘t’.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE 'HA%T'
--6. Display all the students whose first name starts with ‘k’ and third character is ‘y’.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE 'K_Y%'
--7. Display the name of students having no website and name consists of five characters.
SELECT * FROM STUDENTS WHERE WEBSITE IS NULL AND FIRSTNAME LIKE '_____'
--8. Display all the students whose last name consist of ‘jer’.
SELECT * FROM STUDENTS WHERE LASTNAME LIKE '%JER%'
--9. Display all the students whose city name starts with either ‘r’ or ‘b’.
SELECT * FROM STUDENTS WHERE CITY LIKE '[RB]%'
--10. Display all the name students having websites.
SELECT * FROM STUDENTS WHERE WEBSITE IS NOT NULL
--11. Display all the students whose name starts from alphabet A to H.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE '[A-H]%'
--12. Display all the students whose name’s second character is vowel.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE '_[AEIOU]%'
--13. Display the name of students having no website and name consists of minimum five characters.
SELECT * FROM STUDENTS WHERE WEBSITE IS NULL AND FIRSTNAME LIKE '_____%'
--14. Display all the students whose last name starts with ‘Pat’.
SELECT * FROM STUDENTS WHERE LASTNAME LIKE 'PAT%'
--15. Display all the students whose city name does not starts with ‘b’.
SELECT * FROM STUDENTS WHERE CITY NOT LIKE 'B%'

--Part – B:
--1. Display all the students whose name starts from alphabet A or H.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE '[AH]%'
--2. Display all the students whose name’s second character is vowel and of and start with H.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE 'H[AEIOU]%'
--3. Display all the students whose last name does not ends with ‘a’.
SELECT * FROM STUDENTS WHERE LASTNAME NOT LIKE 'A%'
--4. Display all the students whose first name starts with consonant.
SELECT * FROM STUDENTS WHERE FIRSTNAME NOT LIKE '[AEIOU]%'
--5. Display all the students whose website contains .com
SELECT * FROM STUDENTS WHERE WEBSITE LIKE '%.COM%'

--Part – C:
--1. Display all the students whose address consist of -.
SELECT * FROM STUDENTS WHERE ADDRESS LIKE '%-%'
--2. Display all the students whose address contains single quote or double quote.
SELECT * FROM STUDENTS WHERE ADDRESS LIKE '%[''"]%'
--3. Display all the students whose address contains single quote but not double quote.
SELECT * FROM STUDENTS WHERE ADDRESS LIKE '%''%''%'
--4. Display all the students whose website contains @.
SELECT * FROM STUDENTS WHERE WEBSITE LIKE '%@%'
--5. Display all the names those are either four or five characters.
SELECT * FROM STUDENTS WHERE FIRSTNAME LIKE '____' OR FIRSTNAME LIKE '_____'