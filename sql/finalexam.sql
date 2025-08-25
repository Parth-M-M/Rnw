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

alter table students 
add  stu_status varchar(255) ;


update students
set stu_status = 'drop-out'
where studentid = 1 ;


update students
set stu_status = 'active'
where studentid = 2 ;


update students
set stu_status = 'pass-out'
where studentid = 3 ;

update students
set stu_status = 'active'
where studentid = 4 ;

update students
set stu_status = 'active'
where studentid = 5 ;

DELETE FROM enrollments
WHERE studentid IN (
    SELECT studentid
    FROM students
    WHERE stu_status = 'drop-out'
);

select * from students where departmentid = 1 ;

SELECT s.studentid, 
       s.studentname, 
       g.courseid, 
       g.marksobtained, 
       g.grade
FROM students s
JOIN grades g 
    ON s.studentid = g.studentid
ORDER BY g.marksobtained DESC
LIMIT 10;

SELECT 
    s.studentid,
    s.studentname,
    COUNT(a.attendanceid) AS total_classes,
    SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) AS present_classes,
    ROUND(
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) / COUNT(a.attendanceid)) * 100, 
        2
    ) AS attendance_percentage
FROM students s
JOIN attendence a 
    ON s.studentid = a.studentid
GROUP BY s.studentid, s.studentname
HAVING attendance_percentage < 75;

SELECT 
    s.studentid,
    s.studentname,
    ROUND(
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) / COUNT(a.attendanceid)) * 100, 
        2
    ) AS attendance_percentage,
    AVG(g.marksobtained) AS average_marks
FROM students s
JOIN attendence a 
    ON s.studentid = a.studentid
JOIN grades g 
    ON s.studentid = g.studentid
GROUP BY s.studentid, s.studentname
HAVING attendance_percentage < 50
   AND average_marks < 40;
   


SELECT 
    s.studentid,
    s.studentname,
    MAX(g.marksobtained) AS highest_marks,
    ROUND(
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) / COUNT(a.attendanceid)) * 100, 
        2
    ) AS attendance_percentage
FROM students s
LEFT JOIN grades g 
    ON s.studentid = g.studentid
LEFT JOIN attendence a 
    ON s.studentid = a.studentid
GROUP BY s.studentid, s.studentname
HAVING highest_marks > 90
   OR attendance_percentage = 100;


SELECT 
    f.facultyid,
    f.facultyname,
    f.email
FROM faculty f
LEFT JOIN course c 
    ON f.facultyid = c.facultyid
WHERE c.courseid IS NULL;

SELECT studentid, studentname, dateofbirth, gender, email, phone_number, address, admission_date, departmentid, stu_status
FROM students
ORDER BY studentname ASC;

SELECT 
    d.departmentid,
    d.departmentname,
    COUNT(s.studentid) AS total_students
FROM departments d
LEFT JOIN students s 
    ON d.departmentid = s.departmentid
GROUP BY d.departmentid, d.departmentname
ORDER BY d.departmentname;


SELECT 
    c.courseid,
    c.course_name,
    ROUND(AVG(g.marksobtained), 2) AS average_marks
FROM course c
JOIN grades g 
    ON c.courseid = g.courseid
GROUP BY c.courseid, c.course_name
ORDER BY c.course_name;


SELECT 
    ROUND(AVG(attendance_percentage), 2) AS avg_attendance_percentage
FROM (
    SELECT 
        s.studentid,
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
         / COUNT(a.attendanceid)) * 100 AS attendance_percentage
    FROM students s
    JOIN attendence a 
        ON s.studentid = a.studentid
    GROUP BY s.studentid
) AS student_attendance;


SELECT 
    c.courseid,
    c.course_name,
    MAX(g.marksobtained) AS highest_marks,
    MIN(g.marksobtained) AS lowest_marks
FROM course c
JOIN grades g 
    ON c.courseid = g.courseid
GROUP BY c.courseid, c.course_name
ORDER BY c.course_name;


SELECT 
    d.departmentid,
    d.departmentname,
    COUNT(s.studentid) AS total_students
FROM departments d
LEFT JOIN students s 
    ON d.departmentid = s.departmentid
GROUP BY d.departmentid, d.departmentname
ORDER BY d.departmentname;


SELECT 
    ROUND(AVG(attendance_percentage), 2) AS avg_attendance_percentage
FROM (
    SELECT 
        s.studentid,
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
         / COUNT(a.attendanceid)) * 100 AS attendance_percentage
    FROM students s
    JOIN attendence a 
        ON s.studentid = a.studentid
    GROUP BY s.studentid
) AS student_attendance;

SELECT 
    c.courseid,
    c.course_name,
    MAX(g.marksobtained) AS highest_marks,
    MIN(g.marksobtained) AS lowest_marks
FROM course c
JOIN grades g 
    ON c.courseid = g.courseid
GROUP BY c.courseid, c.course_name
ORDER BY c.course_name;

SELECT 
    d.departmentid,
    d.departmentname,
    COUNT(s.studentid) AS total_students
FROM departments d
LEFT JOIN students s 
    ON d.departmentid = s.departmentid
GROUP BY d.departmentid, d.departmentname
ORDER BY d.departmentname;

ALTER TABLE enrollments
ADD CONSTRAINT unique_student_course 
UNIQUE (studentid, courseid);

SELECT 
    f.facultyid,
    f.facultyname,
    c.courseid,
    c.course_name
FROM faculty f
JOIN course c 
    ON f.facultyid = c.facultyid
ORDER BY f.facultyname, c.course_name;

SELECT 
    s.studentid,
    s.studentname,
    s.gender,
    s.email,
    d.departmentname
FROM students s
INNER JOIN departments d 
    ON s.departmentid = d.departmentid
ORDER BY s.studentname;

SELECT 
    s.studentid,
    s.studentname,
    s.email
FROM students s
LEFT JOIN enrollments e 
    ON s.studentid = e.studentid
WHERE e.enrollmentid IS NULL;



SELECT 
    c.courseid,
    c.course_name
FROM faculty f
RIGHT JOIN course c 
    ON f.facultyid = c.facultyid
WHERE f.facultyid IS NULL;


SELECT 
    s.studentid,
    s.studentname,
    g.marksobtained,
    g.grade
FROM students s
LEFT JOIN grades g 
    ON s.studentid = g.studentid
WHERE g.gradeid IS NULL

UNION

SELECT 
    s.studentid,
    s.studentname,
    g.marksobtained,
    g.grade
FROM students s
RIGHT JOIN grades g 
    ON s.studentid = g.studentid
WHERE s.studentid IS NULL;

SELECT 
    s.studentid,
    s.studentname,
    g.marksobtained
FROM students s
JOIN grades g 
    ON s.studentid = g.studentid
WHERE g.marksobtained > (
    SELECT AVG(marksobtained) FROM grades
)
ORDER BY g.marksobtained DESC;


ALTER TABLE faculty ADD experience_years INT;


SELECT 
    c.courseid,
    c.course_name,
    f.facultyname,
    f.experience_years
FROM course c
JOIN faculty f 
    ON c.facultyid = f.facultyid
WHERE f.experience_years >= 5;


SELECT 
    s.studentid,
    s.studentname,
    COUNT(a.attendanceid) AS missed_classes
FROM students s
JOIN attendence a 
    ON s.studentid = a.studentid
WHERE a.attendancestatus = 'absent'
GROUP BY s.studentid, s.studentname
HAVING missed_classes > 10;


SELECT 
    MONTH(a.attendance_date) AS attendance_month,
    COUNT(a.attendanceid) AS total_records
FROM attendence a
GROUP BY attendance_month
ORDER BY attendance_month;


SELECT 
    s.studentid,
    s.studentname,
    TIMESTAMPDIFF(YEAR, s.admission_date, CURDATE()) AS years_since_admission
FROM students s
ORDER BY years_since_admission DESC;


SELECT 
    a.attendanceid,
    s.studentname,
    DATE_FORMAT(a.attendance_date, '%d-%m-%Y') AS formatted_date,
    a.attendancestatus
FROM attendence a
JOIN students s 
    ON a.studentid = s.studentid
ORDER BY a.attendance_date;

UPDATE faculty
SET facultyname = UPPER(facultyname);


UPDATE students
SET studentname = TRIM(studentname);


UPDATE students
SET email = 'Email Not Provided'
WHERE email IS NULL;


SELECT 
    s.studentid,
    s.studentname,
    SUM(g.marksobtained) AS total_marks,
    RANK() OVER (ORDER BY SUM(g.marksobtained) DESC) AS rank_position
FROM students s
JOIN grades g 
    ON s.studentid = g.studentid
GROUP BY s.studentid, s.studentname
ORDER BY total_marks DESC;


SELECT 
    c.courseid,
    c.course_name,
    ROUND(
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
        / COUNT(a.attendanceid)) * 100, 2
    ) AS attendance_percentage
FROM course c
JOIN attendence a 
    ON c.courseid = a.courseid
GROUP BY c.courseid, c.course_name
ORDER BY attendance_percentage DESC;


SET @running_total := 0;

SET @running_total := 0;

SELECT 
    monthly_data.year_months,
    monthly_data.monthly_enrollments,
    (@running_total := @running_total + monthly_data.monthly_enrollments) AS running_total
FROM (
    SELECT 
        DATE_FORMAT(enrollmentdate, '%Y-%m') AS year_months,
        COUNT(enrollmentid) AS monthly_enrollments
    FROM enrollments
    GROUP BY DATE_FORMAT(enrollmentdate, '%Y-%m')
    ORDER BY DATE_FORMAT(enrollmentdate, '%Y-%m')
) AS monthly_data;


SELECT 
    s.studentid,
    s.studentname,
    g.marksobtained,
    CASE
        WHEN g.marksobtained > 90 THEN 'Excellent'
        WHEN g.marksobtained BETWEEN 75 AND 90 THEN 'Good'
        ELSE 'Needs Improvement'
    END AS performance_level
FROM students s
JOIN grades g 
    ON s.studentid = g.studentid
ORDER BY g.marksobtained DESC;


SELECT 
    s.studentid,
    s.studentname,
    ROUND(
        (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
         / COUNT(a.attendanceid)) * 100, 2
    ) AS attendance_percentage,
    CASE
        WHEN (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
              / COUNT(a.attendanceid)) * 100 > 80 THEN 'Regular'
        WHEN (SUM(CASE WHEN a.attendancestatus = 'present' THEN 1 ELSE 0 END) 
              / COUNT(a.attendanceid)) * 100 BETWEEN 50 AND 80 THEN 'Irregular'
        ELSE 'Poor Attendance'
    END AS attendance_category
FROM students s
JOIN attendence a 
    ON s.studentid = a.studentid
GROUP BY s.studentid, s.studentname
ORDER BY attendance_percentage DESC;



