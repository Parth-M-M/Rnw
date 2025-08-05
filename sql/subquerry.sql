CREATE DATABASE IF NOT EXISTS company_db;
USE company_db;
drop table employee ;
CREATE TABLE employees (
    EmployeeID INT PRIMARY KEY,
    Name VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10,2)
);

INSERT INTO employees (EmployeeID, Name, Department, Salary) VALUES
(1, 'Rahul', 'IT', 50000),
(2, 'Anjali', 'HR', 60000),
(3, 'Sameer', 'IT', 70000),
(4, 'Priya', 'Finance', 55000),
(5, 'Amit', 'IT', 65000);

SELECT * FROM Employees WHERE Salary = (SELECT MAX(Salary) FROM Employees);
SELECT * FROM Employees
WHERE Salary IN (SELECT Salary FROM Employees WHERE Department = 'IT');
SELECT * FROM Employees 
WHERE Salary > (SELECT AVG(Salary) FROM Employees);
SELECT (SELECT Name FROM Employees WHERE Salary = (SELECT MAX(Salary) FROM Employees)) AS HighestPaidEmployee;
SELECT * FROM Employees
WHERE Salary > (
    SELECT AVG(Salary) FROM Employees 
    WHERE Department = 'IT'
);
SELECT Name, Salary FROM (SELECT Name, Salary, RANK() OVER (ORDER BY Salary DESC) AS ranks FROM Employees) AS temp
WHERE ranks = 2;
SELECT * FROM Employees E1
WHERE EXISTS (
    SELECT 1 FROM Employees E2 
    WHERE E1.Department = E2.Department 
    GROUP BY E2.Department 
    HAVING COUNT(*) > 1
);





