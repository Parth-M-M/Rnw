create database if not exists school_db ;
use school_db ;
create table students(
	id int primary key,
    st_name varchar(255),
    age varchar(255),
    class varchar(255),
    grade varchar(255)
    
);
insert into students(id,st_name,age,class,grade)
values
(1,'parth',22,'6 sem','a+'),
(2,'tanshik',20,'2 sem','a-'),
(3, 'riya', 21, '4 sem', 'b+'),
(4, 'arjun', 23, '8 sem', 'a'),
(5, 'meera', 19, '1 sem', 'b'),
(6, 'karan', 22, '6 sem', 'a'),
(7, 'isha', 20, '3 sem', 'a-');

show databases;
create database company_db;
use company_db ;
create table employee(
emp_id INT PRIMARY KEY,
emp_name VARCHAR(255),
department VARCHAR(255),
salary DECIMAL(10, 2));

insert into employee(emp_id,emp_name,department,salary)value
(1, 'Alice Johnson', 'HR', 52000.00),
(2, 'Bob Smith', 'IT', 75000.00),
(3, 'Carol Lee', 'Finance', 68000.00),
(4, 'David Kim', 'Marketing', 60000.00),
(5, 'Eva Chen', 'IT', 80000.00),
(6, 'Frank Miller', 'Operations', 55000.00),
(7, 'Grace Park', 'Finance', 72000.00),
(8, 'Henry Adams', 'IT', 77000.00),
(9, 'Irene Scott', 'HR', 51000.00),
(10, 'Jake Turner', 'Marketing', 59000.00);	

select * from employee;
select emp_name,salary from employee ;
select * from employee where salary > 60000 ;
update employee set salary = 99000 where emp_id = 8;
delete from employee 
where emp_id = 8 ;

create table product(
product_id INT PRIMARY KEY,
product_name VARCHAR(255),
category VARCHAR(255),
price DECIMAL(10, 2),
stock_quantity INT
);
INSERT INTO product (product_id, product_name, category, price, stock_quantity) VALUES
(1, 'Wireless Mouse', 'Electronics', 799.00, 120),
(2, 'Bluetooth Speaker', 'Electronics', 1499.00, 60),
(3, 'Yoga Mat', 'Fitness', 499.00, 200),
(4, 'Water Bottle', 'Fitness', 299.00, 150),
(5, 'Notebook', 'Stationery', 59.00, 300),
(6, 'Ballpoint Pen Set', 'Stationery', 120.00, 250),
(7, 'LED Desk Lamp', 'Home Decor', 999.00, 85),
(8, 'Wall Clock', 'Home Decor', 749.00, 90),
(9, 'Cotton T-Shirt', 'Clothing', 599.00, 140),
(10, 'Running Shoes', 'Clothing', 2499.00, 75);

select * from product;
select * from product where category = 'Electronics'  ;
select * from product where price < 100 ;
update product set price = price * 1.10 where category = 'Clothing';
SET SQL_SAFE_UPDATES = 0;
update product set stock_quantity = stock_quantity - stock_quantity where product_id = 2;
delete from product 
where stock_quantity = 0 ;
use	school_db ;
drop table students ;
create table students (
student_id int primary key ,
stu_name varchar(50),
age int (3),
grade varchar(10),
email varchar(100)
);
INSERT INTO students(student_id, stu_name, age, grade, email) VALUES
(1, 'Alice', 20, 'A', 'alice@example.com'),
(2, 'Bob', 22, 'B', 'bob@example.com'),
(3, 'Charlie', 21, 'A', 'charlie@example.com');

use company_db ;
create table sales (
sale_id INT PRIMARY KEY,
product_name VARCHAR(50),
category VARCHAR(50),
price DECIMAL(10, 2),
quantity_sold INT,
sale_date DATE
);
INSERT INTO sales (sale_id, product_name, category, price, quantity_sold, sale_date) VALUES
(1, 'Wireless Mouse', 'Electronics', 799.00, 10, '2025-07-01'),
(2, 'Yoga Mat', 'Fitness', 599.00, 15, '2025-07-02'),
(3, 'Bluetooth Speaker', 'Electronics', 1499.00, 5, '2025-07-03'),
(4, 'Water Bottle', 'Fitness', 299.00, 20, '2025-07-03'),
(5, 'Laptop Stand', 'Office Supplies', 1299.00, 8, '2025-07-04'),
(6, 'Notebook Set', 'Office Supplies', 499.00, 25, '2025-07-05'),
(7, 'Dumbbells (5kg)', 'Fitness', 999.00, 7, '2025-07-06'),
(8, 'LED Desk Lamp', 'Electronics', 1199.00, 6, '2025-07-07'),
(9, 'Pen Drive 32GB', 'Electronics', 699.00, 12, '2025-07-07'),
(10, 'Sticky Notes Pack', 'Office Supplies', 199.00, 30, '2025-07-08');
select * from sales;
select * from sales where category = 'Electronics';
select * from sales where price > 500 ;
select * from sales where sale_date > '2025-07-06';
select category , count(*) as total from sales group by category ;
select  category , sum(quantity_sold) as total_quantity  from sales group by category having sum(quantity_sold) > 50 ;
select * from sales limit 5 ;
select * from sales order by price desc limit 3;
select *  from sales where category = 'Fitness' and price > 300 ;
select * from sales where category = 'Electronics' or category = 'Office Supplies';


