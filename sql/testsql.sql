create database if not exists tea;
use tea;
CREATE TABLE Customer( 
    CustomerID INT PRIMARY KEY,
    CustomerName VARCHAR(50),
    LastName VARCHAR(50),
    Country VARCHAR(50),
    Age INT CHECK (Age >= 0 AND Age <= 99),
    Phone VARCHAR(10) -- Changed to VARCHAR(10) to store phone numbers as text
);

-- Inserting 10 rows of data into the Customer table

INSERT INTO Customer (CustomerID, CustomerName, LastName, Country, Age, Phone)
VALUES
(1, 'Shubham', 'Thakur', 'India', 23, '9876543210'),
(2, 'Aman', 'Chopra', 'Australia', 21, '9876543211'),
(3, 'Naveen', 'Tulasi', 'Sri Lanka', 24, '9876543212'),
(4, 'Aditya', 'Arpan', 'Austria', 21, '9876543213'),
(5, 'Nishant', 'Jain', 'Spain', 22, '9876543214'),
(6, 'Rahul', 'Verma', 'USA', 28, '9876543215'),
(7, 'Kiran', 'Patel', 'India', 30, '9876543216'),
(8, 'Sophia', 'Martinez', 'Mexico', 25, '9876543217'),
(9, 'Alicia', 'Garcia', 'Brazil', 27, '9876543218'),
(10, 'Michael', 'Smith', 'Canada', 26, '9876543219');

CREATE TABLE Employee (
    EmployeeId INT PRIMARY KEY,
    Name VARCHAR(255),
    Gender VARCHAR(10),
    Salary DECIMAL(10, 2),
    Department VARCHAR(255),
    Experience VARCHAR(255)
);

INSERT INTO Employee (EmployeeId, Name, Gender, Salary, Department, Experience)
VALUES (5, 'Priya Sharma', 'Female', 45000, 'IT', '2 years');

INSERT INTO Employee (EmployeeId, Name, Gender, Salary, Department, Experience)
VALUES (6, 'Rahul Patel', 'Male', 65000, 'Sales', '5 years');

INSERT INTO Employee (EmployeeId, Name, Gender, Salary, Department, Experience)
VALUES (7, 'Nisha Gupta', 'Female', 55000, 'Marketing', '4 years');

INSERT INTO Employee (EmployeeId, Name, Gender, Salary, Department, Experience)
VALUES (8, 'Vikram Singh', 'Male', 75000, 'Finance', '7 years');

INSERT INTO Employee (EmployeeId, Name, Gender, Salary, Department, Experience)
VALUES (9, 'Aarti Desai', 'Female', 50000, 'IT', '3 years');

select * from employee;
truncate TABLE employee;
drop table employee ;