use company_db ;
select * from smartphones_cleaned_v6 ;
select model , price 	from smartphones_cleaned_v6 ;
select battery_capacity as 'mah' , price from smartphones_cleaned_v6 ;
select * from smartphones_cleaned_v6 where price  between 10000 and 50000 ; 
select * from smartphones_cleaned_v6 where brand_name = 'samsung' order by price desc limit 3 ;
select brand_name , count(*) as 
total_phone  from smartphones_cleaned_v6 group by brand_name ;

CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    OrderDate DATE,
    ShipDate DATE
);
INSERT INTO Orders (OrderID, OrderDate, ShipDate)
VALUES
    (1, '2024-05-01', '2024-05-05'),
    (2, '2024-05-03', '2024-05-08'),
    (3, '2024-05-06', '2024-05-10'),
    (4, '2024-05-08', '2024-05-12'),
    (5, '2024-05-10', '2024-05-15');
SELECT OrderID, ShipDate, OrderDate, DATEDIFF(ShipDate, OrderDate) AS DaysToShip FROM Orders;
SELECT OrderID, ShipDate, OrderDate, day(ShipDate) AS DaysToShip FROM Orders;

select now();

use school_db;
drop table marks ;
CREATE TABLE marks 
(
 student_id INTEGER PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255),
    branch VARCHAR(255),
    marks INTEGER
);
INSERT INTO marks (name,branch,marks)VALUES 
('Nitish','EEE',82),
('Rishabh','EEE',91),
('Anukant','EEE',69),
('Rupesh','EEE',55),
('Shubham','CSE',78),
('Ved','CSE',43),
('Deepak','CSE',98),
('Arpan','CSE',95),
('Vinay','ECE',95),
('Ankit','ECE',88),
('Anand','ECE',81),
('Rohit','ECE',95),
('Prashant','MECH',75),
('Amit','MECH',69),
('Sunny','MECH',39),
('Gautam','MECH',51);

SELECT AVG(marks) FROM marks;
SELECT * , AVG(marks) OVER() FROM marks;
SELECT * , AVG(marks) OVER(PARTITION BY branch) FROM marks;
SELECT * , AVG(marks) OVER(PARTITION BY branch), MIN(marks) OVER(PARTITION BY branch), MAX(marks)  OVER(PARTITION BY branch) FROM marks ORDER BY student_id;
SELECT * , 
AVG(marks) OVER() As 'Overall_avg' , 
MIN(marks) OVER(), 
MAX(marks) OVER(),
MIN(marks) OVER(PARTITION BY branch), 
MAX(marks) OVER(PARTITION BY branch)
FROM marks ORDER BY student_id;
SELECT * ,
ROW_NUMBER() OVER(partition by branch)
FROM marks;

SELECT * ,
CONCAT(branch ,'-' , ROW_NUMBER() OVER(PARTITION BY branch))
FROM marks;
SELECT * ,
RANK() OVER(ORDER BY marks DESC)
FROM marks;
SELECT * ,
RANK() OVER(PARTITION BY branch ORDER BY marks DESC),
DENSE_RANK() OVER(PARTITION BY branch ORDER BY marks DESC)
FROM marks;
SELECT 
    student_id,
    name,
    branch,
    marks,
    PERCENT_RANK() OVER (ORDER BY marks DESC) AS percent_ranks
FROM 
    marks;
    
    
SELECT 
    student_id,
    name,
    branch,
    marks,
    PERCENT_RANK() OVER (PARTITION BY branch ORDER BY marks DESC) AS percent_ranks
FROM 
    marks;
    SELECT * ,
ROW_NUMBER() OVER(PARTITION BY branch),
NTILE(3) OVER(ORDER BY branch)
FROM marks;
SELECT * ,
LAG(marks) OVER(ORDER BY student_id),
lead(marks) OVER(ORDER BY student_id)
FROM marks;
SELECT *, 
       FIRST_VALUE(marks) OVER (PARTITION BY branch ORDER BY marks DESC) AS top_name,
       FIRST_VALUE(name) OVER (PARTITION BY branch ORDER BY marks DESC) AS top_name
FROM marks;
SELECT *, 
       LAST_VALUE(marks) OVER (ORDER BY marks DESC ROWS BETWEEN UNBOUNDED PRECEDING AND  UNBOUNDED FOLLOWING) AS top_name
FROM marks;
