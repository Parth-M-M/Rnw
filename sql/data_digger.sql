create database if  not exists data_digger ;
use data_digger ;
create table  customer(
customerid int primary key,
customer_name varchar(255),
email varchar(255),
address varchar(255)
);
INSERT INTO customer(customerid, customer_name, email, address) 
VALUES 
(1, 'Amit Sharma', 'amit.sharma@example.com', '123 MG Road, Delhi'),
(2, 'Priya Mehta', 'priya.mehta@example.com', '45 Park Street, Kolkata'),
(3, 'Ravi Kumar', 'ravi.kumar@example.com', '78 Residency Road, Bangalore'),
(4, 'Neha Singh', 'neha.singh@example.com', '88 Nariman Point, Mumbai'),
(5, 'Rahul Verma', 'rahul.verma@example.com', '16 Anna Salai, Chennai'),
(6, 'Anjali Joshi', 'anjali.joshi@example.com', '34 Baner Road, Pune'),
(7, 'Vikram Patel', 'vikram.patel@example.com', '91 SG Highway, Ahmedabad'),
(8, 'Sneha Kapoor', 'sneha.kapoor@example.com', '56 Civil Lines, Jaipur'),
(9, 'Deepak Das', 'deepak.das@example.com', '25 Rajbari Lane, Guwahati'),
(10, 'Kiran Rao', 'kiran.rao@example.com', '12 Sector 21, Chandigarh');


select * from customer;
update customer set address = '24 yogi chowk , surat ' where customerid = 10 ;
delete from customer 
where customerid = 6 ;
SELECT * FROM customer WHERE customer_name LIKE 'Kiran%';
insert into customer values(6, 'Anjali Joshi', 'anjali.joshi@example.com', '34 Baner Road, Pune');

create table orders(
	orderid INT PRIMARY KEY,
    customerid INT,
    orderdate DATE,
    totalamount DECIMAL(10,2),  
    FOREIGN KEY (customerid) REFERENCES customer(customerid)
);
INSERT INTO orders(orderid, customerid, orderdate, totalamount) VALUES 
(1, 1, '2025-07-01', 1250.50),
(2, 2, '2025-07-02', 890.00),
(3, 3, '2025-07-02', 456.75),
(4, 4, '2025-07-03', 1399.99),
(5, 5, '2025-07-04', 2100.00),
(6, 6, '2025-07-04', 750.00),
(7, 7, '2025-07-05', 199.99),
(8, 8, '2025-07-05', 620.00),
(9, 9, '2025-07-06', 980.25),
(10, 10, '2025-07-06', 1500.00),
(11, 1, '2025-07-07', 320.00),
(12, 2, '2025-07-08', 1750.10),
(13, 3, '2025-07-08', 499.99),
(14, 4, '2025-07-09', 100.00),
(15, 5, '2025-07-09', 1850.50),
(16, 6, '2025-07-10', 299.99),
(17, 7, '2025-07-10', 999.95),
(18, 8, '2025-07-11', 430.00),
(19, 9, '2025-07-11', 789.00),
(20, 10, '2025-07-12', 2500.00);
select * from orders where customerid = 6 ;
update orders set totalamount = 1450 where orderid = 10 ;
delete from orders
where orderid = 20 ;
select * from orders where orderdate >= curdate() - interval 30 day ;
select customerid , max(totalamount) as maxamount from orders group by customerid ;
select customerid , min(totalamount) as minamount from orders group by customerid ;
select customerid , avg(totalamount) as avgamount from orders group by customerid ;
create table product(
productid int primary key,
product_name varchar(255),
price decimal(10,2),
stock decimal(10,2)
);

INSERT INTO product(productid, product_name, price, stock) 
VALUES 
(1, 'Samsung Galaxy S24', 79999.00, 25.00),
(2, 'Apple iPhone 15', 89999.00, 15.00),
(3, 'OnePlus 12', 64999.00, 30.00),
(4, 'Dell Inspiron Laptop', 55999.00, 20.00),
(5, 'HP Pavilion Desktop', 45999.00, 12.00),
(6, 'Sony 55" 4K TV', 65999.00, 18.00),
(7, 'LG Washing Machine', 35999.00, 22.00),
(8, 'Whirlpool Refrigerator', 42999.00, 14.00),
(9, 'Bajaj Mixer Grinder', 3999.00, 50.00),
(10, 'Prestige Pressure Cooker', 2499.00, 40.00),
(11, 'Nike Air Max Shoes', 8999.00, 35.00),
(12, 'Adidas Running Shoes', 7499.00, 45.00),
(13, 'Levi\'s Jeans', 3999.00, 60.00),
(14, 'Allen Solly Shirt', 2499.00, 75.00),
(15, 'Woodland Casual Shoes', 4999.00, 28.00),
(16, 'Fossil Watch', 12999.00, 20.00),
(17, 'Titan Steel Watch', 8999.00, 25.00),
(18, 'Ray-Ban Sunglasses', 9999.00, 15.00),
(19, 'JBL Bluetooth Speaker', 4999.00, 40.00),
(20, 'Sony Headphones', 6999.00, 32.00),
(21, 'Canon DSLR Camera', 45999.00, 10.00),
(22, 'Nikon Digital Camera', 38999.00, 12.00),
(23, 'Godrej Almirah', 15999.00, 8.00),
(24, 'IKEA Study Table', 7999.00, 16.00),
(25, 'Philips Air Purifier', 18999.00, 20.00),
(26, 'Dyson Vacuum Cleaner', 32999.00, 5.00),
(27, 'Himalaya Face Cream', 299.00, 100.00),
(28, 'Patanjali Shampoo', 199.00, 150.00),
(29, 'Amul Cheese Block', 180.00, 200.00),
(30, 'Tata Tea Premium', 450.00, 120.00);

select * from product order by product_name desc ;
update product set price = 50000.00 where productid = 26 ;
delete from product where stock = 0 ;
SET SQL_SAFE_UPDATES = 0;
select * from product where price > 500 and price < 30000 ;
select * from product where price = ( select max(price) from product);
select * from product where price = ( select min(price) from product);
create table orderdetail(
orderdetailid int primary key ,
orderid int , 
productid int ,
quantity decimal(10,2),
subtotal decimal(10,2),
foreign key (orderid) REFERENCES orders(orderid),
foreign key (productid) REFERENCES product(productid)
); 

INSERT INTO orderdetail (orderdetailid, orderid, productid, quantity, subtotal) VALUES
(1, 1, 1, 1, 79999.00),
(2, 1, 13, 2, 7998.00),
(3, 2, 4, 1, 55999.00),
(4, 2, 27, 3, 897.00),
(5, 3, 2, 1, 89999.00),
(6, 3, 12, 2, 14998.00),
(7, 4, 6, 1, 65999.00),
(8, 4, 9, 1, 3999.00),
(9, 5, 21, 1, 45999.00),
(10, 5, 14, 2, 4998.00),
(11, 6, 28, 5, 995.00),
(12, 6, 18, 1, 9999.00),
(13, 7, 17, 2, 17998.00),
(14, 7, 29, 10, 1800.00),
(15, 8, 3, 1, 64999.00),
(16, 8, 25, 1, 18999.00),
(17, 9, 10, 2, 4998.00),
(18, 9, 5, 1, 45999.00),
(19, 10, 19, 2, 9998.00),
(20, 10, 20, 1, 6999.00),
(21, 11, 7, 1, 35999.00),
(22, 11, 30, 4, 1800.00),
(23, 12, 22, 1, 38999.00),
(24, 12, 16, 2, 25998.00),
(25, 13, 15, 2, 9998.00),
(26, 13, 26, 1, 50000.00),
(27, 14, 8, 1, 42999.00),
(28, 14, 24, 1, 7999.00),
(29, 15, 11, 2, 17998.00),
(30, 15, 23, 1, 15999.00),
(31, 16, 30, 3, 1350.00),
(32, 16, 27, 5, 1495.00),
(33, 17, 1, 1, 79999.00),
(34, 17, 2, 1, 89999.00),
(35, 18, 14, 2, 4998.00),
(36, 18, 29, 5, 900.00),
(37, 19, 12, 1, 7499.00),
(38, 19, 6, 1, 65999.00),
(39, 1, 17, 1, 8999.00),
(40, 2, 13, 2, 7998.00),
(41, 3, 19, 1, 4999.00),
(42, 4, 28, 10, 1990.00),
(43, 5, 30, 5, 2250.00),
(44, 6, 15, 1, 4999.00),
(45, 7, 10, 1, 2499.00),
(46, 8, 11, 2, 17998.00),
(47, 9, 16, 1, 12999.00),
(48, 10, 24, 1, 7999.00),
(49, 11, 20, 1, 6999.00),
(50, 12, 5, 1, 45999.00);

select * from orderdetail where orderdetailid = 50 ;
select sum(subtotal) as Total from orderdetail ;  
SELECT p.productid , p.product_name , SUM(od.quantity) AS total_quantity
FROM orderdetail od
JOIN product p ON od.productid = p.productid
GROUP BY p.productid, p.product_name
ORDER BY total_quantity DESC
LIMIT 3;
select p.productid , p.product_name , count(od.quantity) as product_count
from orderdetail od
join product p on od.productid = p.productid 
group by  p.productid , p.product_name ;





