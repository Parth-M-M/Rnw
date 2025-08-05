create database if not exists college_db ;
-- drop database college_db ;
create table student(
	studentid int primary key ,
    firstname varchar(255),
    lastname varchar(255),
    email varchar(255),
    Birthdate date ,
    enrolmentdate date 
);

 INSERT INTO student (studentid, firstname, lastname, email, Birthdate, enrolmentdate) VALUES
(1, 'Prakash', 'Jain', 'prakash.jain1@example.com', '1998-03-27', '2019-06-22'),
(2, 'Kiran', 'Mishra', 'kiran.mishra2@example.com', '1999-05-16', '2019-12-30'),
(3, 'Komal', 'Rana', 'komal.rana3@example.com', '1999-10-15', '2017-12-21'),
(4, 'Kavita', 'Malhotra', 'kavita.malhotra4@example.com', '2003-08-06', '2017-07-25'),
(5, 'Amit', 'Trivedi', 'amit.trivedi5@example.com', '2001-12-07', '2019-05-19'),
(6, 'Vikram', 'Desai', 'vikram.desai6@example.com', '2000-12-08', '2020-01-15'),
(7, 'Ankit', 'Shetty', 'ankit.shetty7@example.com', '1999-04-07', '2020-04-30'),
(8, 'Priya', 'Malhotra', 'priya.malhotra8@example.com', '2001-12-05', '2018-02-05'),
(9, 'Kiran', 'Agarwal', 'kiran.agarwal9@example.com', '2002-02-09', '2019-01-09'),
(10, 'Bhavna', 'Khanna', 'bhavna.khanna10@example.com', '2000-02-27', '2020-03-31'),
(11, 'Ankit', 'Thakur', 'ankit.thakur11@example.com', '2001-12-15', '2018-02-23'),
(12, 'Isha', 'Khanna', 'isha.khanna12@example.com', '2002-10-03', '2018-01-19'),
(13, 'Divya', 'Banerjee', 'divya.banerjee13@example.com', '2003-04-30', '2021-01-20'),
(14, 'Isha', 'Kapoor', 'isha.kapoor14@example.com', '2003-05-14', '2019-08-16'),
(15, 'Anjali', 'Rana', 'anjali.rana15@example.com', '2003-11-08', '2018-01-14'),
(16, 'Neha', 'Gupta', 'neha.gupta16@example.com', '2002-07-30', '2018-01-16'),
(17, 'Amit', 'Verma', 'amit.verma17@example.com', '1998-12-20', '2018-11-12'),
(18, 'Sanjay', 'Bhatt', 'sanjay.bhatt18@example.com', '1999-02-08', '2021-03-03'),
(19, 'Simran', 'Banerjee', 'simran.banerjee19@example.com', '1999-08-28', '2020-02-15'),
(20, 'Kavita', 'Malhotra', 'kavita.malhotra20@example.com', '1998-06-26', '2018-01-04'),
(21, 'Meena', 'Iyer', 'meena.iyer21@example.com', '2000-09-16', '2018-03-22'),
(22, 'Tanvi', 'Rana', 'tanvi.rana22@example.com', '2001-07-18', '2021-07-18'),
(23, 'Mohit', 'Joshi', 'mohit.joshi23@example.com', '2000-02-15', '2020-07-10'),
(24, 'Priya', 'Verma', 'priya.verma24@example.com', '2001-08-21', '2019-02-14'),
(25, 'Bhavna', 'Kapoor', 'bhavna.kapoor25@example.com', '2000-12-20', '2020-04-04'),
(26, 'Juhi', 'Desai', 'juhi.desai26@example.com', '2003-06-25', '2017-11-27'),
(27, 'Ravi', 'Sharma', 'ravi.sharma27@example.com', '2001-12-02', '2020-09-28'),
(28, 'Anjali', 'Tiwari', 'anjali.tiwari28@example.com', '2000-10-21', '2018-09-12'),
(29, 'Manish', 'Rawat', 'manish.rawat29@example.com', '1999-01-24', '2019-01-05'),
(30, 'Nikhil', 'Sharma', 'nikhil.sharma30@example.com', '1999-03-27', '2020-09-01'),
(31, 'Gaurav', 'Trivedi', 'gaurav.trivedi31@example.com', '2001-12-21', '2017-07-22'),
(32, 'Abhishek', 'Malhotra', 'abhishek.malhotra32@example.com', '1998-12-21', '2017-09-21'),
(33, 'Sneha', 'Joshi', 'sneha.joshi33@example.com', '1998-09-28', '2018-05-11'),
(34, 'Simran', 'Shetty', 'simran.shetty34@example.com', '2000-05-11', '2019-10-02'),
(35, 'Vikram', 'Sharma', 'vikram.sharma35@example.com', '2003-10-30', '2021-01-08'),
(36, 'Kavita', 'Khanna', 'kavita.khanna36@example.com', '1999-04-29', '2018-03-09'),
(37, 'Aisha', 'Dubey', 'aisha.dubey37@example.com', '2002-12-23', '2017-12-28'),
(38, 'Neha', 'Bansal', 'neha.bansal38@example.com', '2002-09-29', '2018-02-12'),
(39, 'Ankit', 'Sharma', 'ankit.sharma39@example.com', '2000-02-02', '2018-03-25'),
(40, 'Priya', 'Mehta', 'priya.mehta40@example.com', '1998-03-11', '2018-06-30'),
(41, 'Anjali', 'Rajput', 'anjali.rajput41@example.com', '2002-01-05', '2017-10-24'),
(42, 'Sneha', 'Chopra', 'sneha.chopra42@example.com', '1998-09-27', '2019-02-28'),
(43, 'Bhavna', 'Pandey', 'bhavna.pandey43@example.com', '1999-10-27', '2018-10-30'),
(44, 'Divya', 'Malhotra', 'divya.malhotra44@example.com', '2000-06-03', '2018-03-28'),
(45, 'Lokesh', 'Reddy', 'lokesh.reddy45@example.com', '2003-01-09', '2021-02-21'),
(46, 'Amit', 'Chopra', 'amit.chopra46@example.com', '2002-05-29', '2018-02-05'),
(47, 'Siddharth', 'Malhotra', 'siddharth.malhotra47@example.com', '2000-03-09', '2017-10-15'),
(48, 'Kavita', 'Rawat', 'kavita.rawat48@example.com', '2000-05-17', '2019-02-18'),
(49, 'Nikhil', 'Menon', 'nikhil.menon49@example.com', '2002-03-13', '2020-02-01'),
(50, 'Manish', 'Desai', 'manish.desai50@example.com', '2001-04-30', '2021-07-20'),
(51, 'Pallavi', 'Pandey', 'pallavi.pandey51@example.com', '1998-04-03', '2020-02-19'),
(52, 'Deepak', 'Mehta', 'deepak.mehta52@example.com', '2002-09-08', '2017-07-26'),
(53, 'Abhishek', 'Puri', 'abhishek.puri53@example.com', '1999-07-21', '2020-03-11'),
(54, 'Pooja', 'Bhatt', 'pooja.bhatt54@example.com', '2003-08-08', '2018-09-13'),
(55, 'Neha', 'Banerjee', 'neha.banerjee55@example.com', '2001-03-12', '2018-02-23'),
(56, 'Kiran', 'Thakur', 'kiran.thakur56@example.com', '2002-11-25', '2020-08-11'),
(57, 'Ruchi', 'Dubey', 'ruchi.dubey57@example.com', '1999-05-22', '2020-01-03'),
(58, 'Sunita', 'Bose', 'sunita.bose58@example.com', '2000-05-25', '2021-02-22'),
(59, 'Aisha', 'Nair', 'aisha.nair59@example.com', '2001-09-29', '2019-10-17'),
(60, 'Pooja', 'Sharma', 'pooja.sharma60@example.com', '2001-07-14', '2020-11-19'),
(61, 'Pallavi', 'Mishra', 'pallavi.mishra61@example.com', '1998-10-18', '2018-07-06'),
(62, 'Abhishek', 'Puri', 'abhishek.puri62@example.com', '2003-07-14', '2019-11-13'),
(63, 'Ruchi', 'Chopra', 'ruchi.chopra63@example.com', '1998-01-17', '2020-12-01'),
(64, 'Lokesh', 'Yadav', 'lokesh.yadav64@example.com', '2002-03-24', '2019-01-30'),
(65, 'Nikhil', 'Desai', 'nikhil.desai65@example.com', '1999-01-11', '2020-12-02'),
(66, 'Shreya', 'Gupta', 'shreya.gupta66@example.com', '2003-05-07', '2019-08-02'),
(67, 'Rohit', 'Chopra', 'rohit.chopra67@example.com', '1998-08-05', '2017-08-25'),
(68, 'Divya', 'Mehta', 'divya.mehta68@example.com', '1999-05-12', '2019-05-18'),
(69, 'Komal', 'Pandey', 'komal.pandey69@example.com', '2001-04-15', '2020-12-13'),
(70, 'Gaurav', 'Rawat', 'gaurav.rawat70@example.com', '1998-09-21', '2019-06-10'),
(71, 'Siddharth', 'Yadav', 'siddharth.yadav71@example.com', '1999-04-03', '2018-01-15'),
(72, 'Nikhil', 'Ghosh', 'nikhil.ghosh72@example.com', '2001-04-11', '2019-10-02'),
(73, 'Ruchi', 'Trivedi', 'ruchi.trivedi73@example.com', '1998-04-01', '2019-09-12'),
(74, 'Priya', 'Khanna', 'priya.khanna74@example.com', '2002-05-18', '2021-07-26'),
(75, 'Simran', 'Pillai', 'simran.pillai75@example.com', '2002-09-29', '2021-04-02'),
(76, 'Isha', 'Bansal', 'isha.bansal76@example.com', '2001-08-13', '2021-02-14'),
(77, 'Ruchi', 'Mehta', 'ruchi.mehta77@example.com', '2002-04-02', '2019-06-08'),
(78, 'Divya', 'Mehta', 'divya.mehta78@example.com', '1999-09-07', '2019-02-23'),
(79, 'Meena', 'Reddy', 'meena.reddy79@example.com', '2000-09-02', '2017-11-08'),
(80, 'Divya', 'Puri', 'divya.puri80@example.com', '1998-06-15', '2019-08-07'),
(81, 'Sneha', 'Trivedi', 'sneha.trivedi81@example.com', '2003-01-10', '2018-12-03'),
(82, 'Manish', 'Ghosh', 'manish.ghosh82@example.com', '2002-03-01', '2018-01-26'),
(83, 'Deepak', 'Yadav', 'deepak.yadav83@example.com', '2003-07-14', '2020-09-20'),
(84, 'Siddharth', 'Rana', 'siddharth.rana84@example.com', '1999-07-03', '2018-08-06'),
(85, 'Ankit', 'Khanna', 'ankit.khanna85@example.com', '2001-05-17', '2021-05-05'),
(86, 'Aditya', 'Rajput', 'aditya.rajput86@example.com', '1999-08-24', '2021-06-15'),
(87, 'Komal', 'Patel', 'komal.patel87@example.com', '2003-07-30', '2019-09-13'),
(88, 'Priya', 'Pandey', 'priya.pandey88@example.com', '1999-11-10', '2017-09-26'),
(89, 'Tanvi', 'Menon', 'tanvi.menon89@example.com', '1998-05-02', '2020-01-11'),
(90, 'Isha', 'Trivedi', 'isha.trivedi90@example.com', '1999-08-22', '2018-03-13'),
(91, 'Harsh', 'Iyer', 'harsh.iyer91@example.com', '2001-12-15', '2020-12-28'),
(92, 'Anjali', 'Iyer', 'anjali.iyer92@example.com', '2001-05-05', '2019-02-23'),
(93, 'Ravi', 'Kumar', 'ravi.kumar93@example.com', '2002-07-07', '2019-11-08'),
(94, 'Juhi', 'Trivedi', 'juhi.trivedi94@example.com', '2000-05-19', '2021-05-03'),
(95, 'Juhi', 'Pillai', 'juhi.pillai95@example.com', '1998-05-10', '2021-04-27'),
(96, 'Ravi', 'Singh', 'ravi.singh96@example.com', '2000-10-06', '2018-01-02'),
(97, 'Kiran', 'Ghosh', 'kiran.ghosh97@example.com', '2002-10-28', '2019-10-29'),
(98, 'Anjali', 'Kapoor', 'anjali.kapoor98@example.com', '1999-09-23', '2018-11-21'),
(99, 'Simran', 'Malhotra', 'simran.malhotra99@example.com', '1999-06-08', '2018-04-20'),
(100, 'Amit', 'Mehta', 'amit.mehta100@example.com', '1998-08-03', '2021-01-15'),
(101, 'Meena', 'Ghosh', 'meena.ghosh101@example.com', '1998-05-25', '2019-02-20'),
(102, 'Pooja', 'Shetty', 'pooja.shetty102@example.com', '2003-08-21', '2017-06-15'),
(103, 'Harsh', 'Mehta', 'harsh.mehta103@example.com', '2001-01-28', '2018-01-18'),
(104, 'Harsh', 'Desai', 'harsh.desai104@example.com', '1998-10-14', '2018-10-05'),
(105, 'Siddharth', 'Rastogi', 'siddharth.rastogi105@example.com', '2003-01-02', '2020-06-13'),
(106, 'Aditya', 'Yadav', 'aditya.yadav106@example.com', '2000-06-17', '2017-06-10'),
(107, 'Amit', 'Mehta', 'amit.mehta107@example.com', '2002-04-16', '2019-03-25'),
(108, 'Ravi', 'Rastogi', 'ravi.rastogi108@example.com', '1999-08-01', '2019-01-21'),
(109, 'Manish', 'Kumar', 'manish.kumar109@example.com', '1999-06-05', '2019-01-09'),
(110, 'Bhavna', 'Trivedi', 'bhavna.trivedi110@example.com', '2001-10-17', '2021-03-05'),
(111, 'Vikram', 'Rastogi', 'vikram.rastogi111@example.com', '2001-05-03', '2021-01-29'),
(112, 'Aditya', 'Trivedi', 'aditya.trivedi112@example.com', '1999-05-12', '2020-07-12'),
(113, 'Aisha', 'Shetty', 'aisha.shetty113@example.com', '1998-09-20', '2018-05-21'),
(114, 'Mohit', 'Pillai', 'mohit.pillai114@example.com', '1998-09-14', '2019-02-25'),
(115, 'Mohit', 'Rastogi', 'mohit.rastogi115@example.com', '1999-02-01', '2018-11-23'),
(116, 'Deepak', 'Joshi', 'deepak.joshi116@example.com', '1998-06-13', '2020-04-05'),
(117, 'Sunita', 'Bose', 'sunita.bose117@example.com', '2003-07-27', '2020-08-01'),
(118, 'Komal', 'Rajput', 'komal.rajput118@example.com', '1999-09-02', '2019-11-13'),
(119, 'Pallavi', 'Dubey', 'pallavi.dubey119@example.com', '1998-10-16', '2019-09-18'),
(120, 'Isha', 'Kapoor', 'isha.kapoor120@example.com', '1998-05-19', '2019-06-12'),
(121, 'Ravi', 'Yadav', 'ravi.yadav121@example.com', '1998-04-06', '2018-05-13'),
(122, 'Tanvi', 'Shetty', 'tanvi.shetty122@example.com', '1998-12-02', '2018-06-16'),
(123, 'Neha', 'Banerjee', 'neha.banerjee123@example.com', '1999-07-06', '2019-06-17'),
(124, 'Siddharth', 'Sinha', 'siddharth.sinha124@example.com', '2002-07-28', '2017-11-29'),
(125, 'Aisha', 'Rawat', 'aisha.rawat125@example.com', '2001-05-15', '2019-07-21');

create table department(
	departmentid int primary key ,
    departmentname varchar(255)
);

INSERT INTO department (departmentid, departmentname) VALUES
(1, 'ECE'),
(2, 'EEE'),
(3, 'MECH'),
(4, 'CHEM'),
(5, 'CIVIL');


create table course(
	courseid int primary key ,
    coursename varchar(255),
    departmentid int ,
    credits decimal(10,2),
    FOREIGN key (departmentid) REFERENCES department(departmentid)
);

INSERT INTO course (courseid, coursename, departmentid, credits) VALUES
-- ECE Courses (Dept 1)
(1, 'Signals & Systems', 1, 4.00),
(2, 'Analog & Digital Electronics', 1, 4.00),
(3, 'Microprocessors & Microcontrollers', 1, 3.00),
(4, 'Communication Systems', 1, 3.00),
(5, 'Electromagnetic Field Theory', 1, 3.00),
(6, 'Digital Signal Processing', 1, 4.00),
(7, 'VLSI Design', 1, 3.00),
(8, 'Antenna & Wave Propagation', 1, 3.00),
(9, 'Embedded Systems', 1, 4.00),
(10, 'Wireless Communication', 1, 3.00),

-- EEE Courses (Dept 2)
(11, 'Electrical Machines I', 2, 4.00),
(12, 'Electrical Machines II', 2, 4.00),
(13, 'Power Systems', 2, 3.00),
(14, 'Control Systems', 2, 4.00),
(15, 'Power Electronics', 2, 3.00),
(16, 'Electrical Measurements & Instrumentation', 2, 3.00),
(17, 'Renewable Energy Systems', 2, 3.00),
(18, 'High Voltage Engineering', 2, 3.00),
(19, 'Switchgear & Protection', 2, 3.00),
(20, 'Energy Management & Auditing', 2, 3.00),

-- MECH Courses (Dept 3)
(21, 'Engineering Mechanics', 3, 4.00),
(22, 'Thermodynamics', 3, 4.00),
(23, 'Fluid Mechanics & Hydraulic Machines', 3, 4.00),
(24, 'Strength of Materials', 3, 4.00),
(25, 'Machine Design', 3, 3.00),
(26, 'Manufacturing Technology', 3, 3.00),
(27, 'Heat & Mass Transfer', 3, 3.00),
(28, 'Dynamics of Machines', 3, 3.00),
(29, 'CAD/CAM', 3, 3.00),
(30, 'Industrial Engineering', 3, 3.00),

-- CHEM Courses (Dept 4)
(31, 'Process Calculations', 4, 4.00),
(32, 'Fluid & Particle Mechanics', 4, 4.00),
(33, 'Heat Transfer Operations', 4, 3.00),
(34, 'Mass Transfer Operations', 4, 3.00),
(35, 'Chemical Reaction Engineering', 4, 4.00),
(36, 'Process Dynamics & Control', 4, 3.00),
(37, 'Chemical Process Equipment Design', 4, 3.00),
(38, 'Environmental Engineering for Chemical Processes', 4, 3.00),
(39, 'Biochemical Engineering', 4, 3.00),
(40, 'Plant Design & Economics', 4, 3.00),

-- CIVIL Courses (Dept 5)
(41, 'Engineering Mechanics', 5, 4.00),
(42, 'Structural Analysis', 5, 4.00),
(43, 'Geotechnical Engineering', 5, 3.00),
(44, 'Fluid Mechanics & Hydraulics', 5, 4.00),
(45, 'Concrete Technology', 5, 3.00),
(46, 'Transportation Engineering', 5, 3.00),
(47, 'Environmental Engineering', 5, 3.00),
(48, 'Surveying & Geomatics', 5, 3.00),
(49, 'Construction Management', 5, 3.00),
(50, 'Water Resources Engineering', 5, 3.00);

create table enrollment(
		enrollmentid int primary key ,
        studentid int ,
        courseid int,
        foreign key (studentid) REFERENCES student(studentid),
        foreign key (courseid) REFERENCES course(courseid),
        enrollmentdate date
        );
        
INSERT INTO enrollment (enrollmentid, studentid, courseid, enrollmentdate) VALUES
(1, 1, 26, '2018-04-02'),
(2, 2, 14, '2020-01-29'),
(3, 3, 13, '2020-01-22'),
(4, 4, 10, '2017-04-04'),
(5, 5, 30, '2018-01-08'),
(6, 6, 29, '2021-10-11'),
(7, 7, 1, '2021-01-21'),
(8, 8, 1, '2020-11-01'),
(9, 9, 20, '2020-09-02'),
(10, 10, 19, '2018-02-09'),
(11, 11, 12, '2018-04-12'),
(12, 12, 13, '2018-08-10'),
(13, 13, 34, '2020-08-07'),
(14, 14, 5, '2021-03-17'),
(15, 15, 22, '2018-05-10'),
(16, 16, 10, '2018-01-27'),
(17, 17, 44, '2020-11-18'),
(18, 18, 27, '2018-03-03'),
(19, 19, 34, '2018-05-13'),
(20, 20, 47, '2017-05-22'),
(21, 21, 14, '2017-05-25'),
(22, 22, 42, '2019-02-24'),
(23, 23, 13, '2021-09-21'),
(24, 24, 22, '2020-06-14'),
(25, 25, 21, '2019-11-30'),
(26, 26, 16, '2020-09-24'),
(27, 27, 17, '2019-12-04'),
(28, 28, 12, '2020-04-10'),
(29, 29, 41, '2019-04-06'),
(30, 30, 42, '2019-08-20'),
(31, 31, 12, '2017-02-10'),
(32, 32, 42, '2018-10-04'),
(33, 33, 3, '2018-10-02'),
(34, 34, 41, '2017-02-25'),
(35, 35, 19, '2019-05-06'),
(36, 36, 19, '2019-03-26'),
(37, 37, 1, '2019-08-26'),
(38, 38, 33, '2021-10-19'),
(39, 39, 47, '2021-10-10'),
(40, 40, 24, '2017-05-01'),
(41, 41, 5, '2019-12-01'),
(42, 42, 33, '2018-03-02'),
(43, 43, 38, '2018-11-12'),
(44, 44, 27, '2017-08-23'),
(45, 45, 12, '2019-11-05'),
(46, 46, 25, '2021-04-23'),
(47, 47, 16, '2020-09-02'),
(48, 48, 20, '2021-01-18'),
(49, 49, 12, '2018-04-23'),
(50, 50, 28, '2021-05-05'),
(51, 51, 41, '2018-02-22'),
(52, 52, 14, '2019-06-15'),
(53, 53, 43, '2019-03-03'),
(54, 54, 17, '2018-06-14'),
(55, 55, 49, '2019-09-26'),
(56, 56, 48, '2020-11-10'),
(57, 57, 6, '2021-01-26'),
(58, 58, 34, '2019-07-26'),
(59, 59, 9, '2020-04-16'),
(60, 60, 36, '2019-02-24'),
(61, 61, 8, '2019-04-24'),
(62, 62, 25, '2020-04-04'),
(63, 63, 15, '2019-02-26'),
(64, 64, 42, '2020-08-31'),
(65, 65, 42, '2018-12-10'),
(66, 66, 10, '2018-01-31'),
(67, 67, 12, '2021-06-26'),
(68, 68, 28, '2018-08-31'),
(69, 69, 44, '2017-10-24'),
(70, 70, 21, '2018-09-01'),
(71, 71, 37, '2021-09-12'),
(72, 72, 1, '2019-10-12'),
(73, 73, 49, '2017-08-19'),
(74, 74, 24, '2021-11-05'),
(75, 75, 28, '2017-03-26'),
(76, 76, 25, '2019-11-18'),
(77, 77, 28, '2017-03-02'),
(78, 78, 37, '2020-10-22'),
(79, 79, 10, '2020-10-17'),
(80, 80, 11, '2017-02-03'),
(81, 81, 40, '2020-12-08'),
(82, 82, 47, '2018-07-21'),
(83, 83, 35, '2018-12-07'),
(84, 84, 48, '2020-01-02'),
(85, 85, 16, '2020-01-31'),
(86, 86, 37, '2021-09-24'),
(87, 87, 9, '2017-05-31'),
(88, 88, 47, '2021-02-03'),
(89, 89, 32, '2017-06-08'),
(90, 90, 3, '2017-06-10'),
(91, 91, 4, '2021-02-16'),
(92, 92, 34, '2020-06-20'),
(93, 93, 35, '2020-12-08'),
(94, 94, 46, '2021-04-29'),
(95, 95, 13, '2019-11-28'),
(96, 96, 30, '2020-06-21'),
(97, 97, 11, '2020-05-03'),
(98, 98, 42, '2019-07-22'),
(99, 99, 1, '2017-06-12'),
(100, 100, 14, '2017-03-09'),
(101, 101, 46, '2017-05-16'),
(102, 102, 49, '2020-01-27'),
(103, 103, 35, '2018-01-28'),
(104, 104, 32, '2021-11-01'),
(105, 105, 18, '2017-03-21'),
(106, 106, 14, '2021-10-28'),
(107, 107, 8, '2019-05-09'),
(108, 108, 8, '2019-04-09'),
(109, 109, 50, '2021-07-11'),
(110, 110, 34, '2021-07-08'),
(111, 111, 10, '2021-04-03'),
(112, 112, 40, '2021-06-24'),
(113, 113, 20, '2019-07-29'),
(114, 114, 28, '2017-09-18'),
(115, 115, 33, '2019-10-02'),
(116, 116, 17, '2019-01-23'),
(117, 117, 37, '2021-02-21'),
(118, 118, 10, '2021-10-30'),
(119, 119, 4, '2018-02-18'),
(120, 120, 23, '2018-03-16'),
(121, 121, 33, '2017-03-21'),
(122, 122, 24, '2017-11-02'),
(123, 123, 30, '2017-12-10'),
(124, 124, 16, '2018-03-12'),
(125, 125, 16, '2021-02-09');

INSERT INTO student (studentid, firstname, lastname, email, Birthdate, enrolmentdate)
VALUES (126, 'Rahul', 'Sharma', 'rahul.sharma126@example.com', '2002-08-20', '2021-08-01');

SELECT * FROM student;

UPDATE student
SET email = 'rahul.updated@example.com', lastname = 'Shukla'
WHERE studentid = 126;

DELETE FROM student WHERE studentid = 126;

select * from enrollment where enrollmentdate > '2019-12-30';

SELECT courseid, coursename, credits
FROM course
WHERE departmentid = (SELECT departmentid FROM department WHERE departmentname = 'civil')
LIMIT 5;

select 
c.courseid,
c.coursename,
count(e.studentid) as total_students
from
	enrollment e
    
join 
	course c on e.courseid = c.courseid
    
group by 
	c.courseid,c.coursename ;

select 
c.courseid,
c.coursename,
count(e.studentid) as total_students
from
	enrollment e
    
join 
	course c on e.courseid = c.courseid
    
group by 
	c.courseid,c.coursename
having
	count(e.studentid) > 5
order by
	total_students desc ;
    
    
SELECT s.studentid, s.firstname, s.lastname
FROM student s
JOIN enrollment e1 ON s.studentid = e1.studentid
JOIN enrollment e2 ON s.studentid = e2.studentid
WHERE e1.courseid = (SELECT courseid FROM course WHERE coursename = 'Signals & Systems')
  AND e2.courseid = (SELECT courseid FROM course WHERE coursename = 'Analog & Digital Electronics');

    
    
SELECT s.studentid, s.firstname, s.lastname
FROM student s
JOIN enrollment e1 ON s.studentid = e1.studentid
JOIN enrollment e2 ON s.studentid = e2.studentid
WHERE e1.courseid = (SELECT courseid FROM course WHERE coursename = 'Signals & Systems')
  OR e2.courseid = (SELECT courseid FROM course WHERE coursename = 'Analog & Digital Electronics');
