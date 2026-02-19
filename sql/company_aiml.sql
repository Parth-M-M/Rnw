create database if not exists company_aiml ;
use company_aiml ;
DROP TABLE IF EXISTS products;

CREATE TABLE products (
    product_id VARCHAR(50) PRIMARY KEY,
    product_name VARCHAR(100) NOT NULL,
    category VARCHAR(100),
    price INT,
    stock INT
);


INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P001', 'Earphones', 'Electronics', 499, 50);
INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P002', 'Bluetooth Speaker', 'Audio', 699, 40);
INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P003', 'Smart Watch', 'Wearable', 1299, 25);
INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P004', 'Keyboard', 'Computer', 899, 60);
INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P005', 'Headphones', 'Audio', 1999, 30);
INSERT INTO products (product_id, product_name, category, price, stock) VALUES ('P006', 'Power Bank', 'Mobile Accessories', 2599, 20);
