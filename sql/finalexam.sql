create database if not exists final_exam_db ;
use final_exam_db ;
create table students(
	studentid int primary key,
    studentname varchar(255),
    dateofbirth date ,
    gender varchar(255),
    email varchar(255),
    phone_number decimal(10,2),
    address varchar(255),
    admission_date date ,
    departmentid int ,
    foreign key (departmentid) REFERENCES departments(departmentid)
);
create table faculty(
	facultyid int primary key,
    facultyname varchar(255),
    email varchar(255),
    phonenumber decimal(10,2),
    departmentid int ,
    foreign key (departmentid) REFERENCES departments(departmentid)
);
	create table departments(
		departmentid int primary key ,
		departmentname varchar(255)
	);
create table course(
	courseid int primary key ,
    course_name varchar(255),
    facultyid int ,
	foreign key (facultyid) REFERENCES faculty(facultyid)
);
create table enrollments(
	enrollmentid int primary key,
    studentid int ,
    courseid int ,
    enrollmentdate date ,
    foreign key (studentid) REFERENCES students(studentid),
    foreign key (courseid) REFERENCES course(courseid)
);
create table attendence(
	attendanceid int primary key ,
    studentid int,
    courseid int,
    attendance_date date ,
    attendancestatus enum('present','absent','late'),
    foreign key (studentid) REFERENCES students(studentid),
    foreign key (courseid) REFERENCES course(courseid)
);
create table grades(
	gradeid int primary key ,
    studentid int ,
    courseid int ,
    marksobtained decimal(10,2),
    grade varchar(255),
    foreign key (studentid) REFERENCES students(studentid),
    foreign key (courseid) REFERENCES course(courseid)
);


INSERT INTO departments (departmentid, departmentname) VALUES
(1, 'Computer Science'),
(2, 'Mechanical Engineering'),
(3, 'Electrical Engineering'),
(4, 'Civil Engineering'),
(5, 'Biotechnology'),
(6, 'Business Administration'),
(7, 'Mathematics'),
(8, 'Physics'),
(9, 'Chemistry'),
(10, 'English Literature');




INSERT INTO faculty (facultyid, facultyname, email, phonenumber, departmentid) VALUES
(1, 'Dr. Asha Mehta', 'asha.mehta@univ.edu', 9876543210, 1),
(2, 'Prof. Rajiv Singh', 'rajiv.singh@univ.edu', 9876543211, 2),
(3, 'Dr. Neeraj Kapoor', 'neeraj.kapoor@univ.edu', 9876543212, 3),
(4, 'Dr. Meena Iyer', 'meena.iyer@univ.edu', 9876543213, 4),
(5, 'Prof. Anil Rao', 'anil.rao@univ.edu', 9876543214, 5);


INSERT INTO students (studentid, studentname, dateofbirth, gender, email, phone_number, address, admission_date, departmentid) VALUES
(1, 'Priya Sharma', '2002-05-15', 'Female', 'priya.sharma@univ.edu', 9876500001, 'Delhi', '2021-08-01', 1),
(2, 'Amit Verma', '2001-03-22', 'Male', 'amit.verma@univ.edu', 9876500002, 'Mumbai', '2020-08-01', 2),
(3, 'Sneha Patel', '2003-07-10', 'Female', 'sneha.patel@univ.edu', 9876500003, 'Ahmedabad', '2022-08-01', 1),
(4, 'Rahul Kumar', '2002-11-18', 'Male', 'rahul.kumar@univ.edu', 9876500004, 'Kolkata', '2021-08-01', 3),
(5, 'Ananya Joshi', '2001-09-05', 'Female', 'ananya.joshi@univ.edu', 9876500005, 'Pune', '2020-08-01', 4);


INSERT INTO course (courseid, course_name, facultyid) VALUES
(1, 'Database Systems', 1),
(2, 'Thermodynamics', 2),
(3, 'Circuit Analysis', 3),
(4, 'Structural Engineering', 4),
(5, 'Genetic Engineering', 5);


INSERT INTO enrollments (enrollmentid, studentid, courseid, enrollmentdate) VALUES
(1, 1, 1, '2021-08-05'),
(2, 2, 2, '2020-08-05'),
(3, 3, 1, '2022-08-05'),
(4, 4, 3, '2021-08-10'),
(5, 5, 4, '2020-08-07');


INSERT INTO attendence (attendanceid, studentid, courseid, attendance_date, attendancestatus) VALUES
(1, 1, 1, '2023-01-10', 'present'),
(2, 1, 1, '2023-01-11', 'late'),
(3, 2, 2, '2023-01-10', 'absent'),
(4, 3, 1, '2023-01-10', 'present'),
(5, 4, 3, '2023-01-10', 'present');


INSERT INTO grades (gradeid, studentid, courseid, marksobtained, grade) VALUES
(1, 1, 1, 85.50, 'A'),
(2, 2, 2, 70.00, 'B'),
(3, 3, 1, 90.00, 'A+'),
(4, 4, 3, 65.00, 'C'),
(5, 5, 4, 78.00, 'B+');

ALTER TABLE students MODIFY phone_number BIGINT;
ALTER TABLE faculty MODIFY phonenumber BIGINT;

UPDATE students
SET phone_number = '1234567890'
WHERE studentid = 1;




