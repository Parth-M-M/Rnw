#include <stdio.h>
#include <string.h> 

struct stu {
    int stuid;
    char stuname[50];
    int stuage;
    char stucourse[50];
    char stucity[50];
    char stustandard[50];
    char stuschool[50];
}; 

int main() {
    struct stu s1, s2, s3;

   
    s1.stuid = 1234;
    strcpy(s1.stuname, "nirav");
    s1.stuage = 20;
    strcpy(s1.stucourse, "ec");
    strcpy(s1.stucity, "surat");
    strcpy(s1.stustandard, "2nd year");
    strcpy(s1.stuschool, "gec");

    
    s2.stuid = 5678;
    strcpy(s2.stuname, "rahul");
    s2.stuage = 21;
    strcpy(s2.stucourse, "cs");
    strcpy(s2.stucity, "ahmedabad");
    strcpy(s2.stustandard, "3rd year");
    strcpy(s2.stuschool, "ld college");

    
    s3.stuid = 9101;
    strcpy(s3.stuname, "aisha");
    s3.stuage = 19;
    strcpy(s3.stucourse, "it");
    strcpy(s3.stucity, "vadodara");
    strcpy(s3.stustandard, "1st year");
    strcpy(s3.stuschool, "msu");
    
    printf("\n");
    printf("Student ID: %d\n", s1.stuid);
    printf("Name: %s\n", s1.stuname);
    printf("Age: %d\n", s1.stuage);
    printf("Course: %s\n", s1.stucourse);
    printf("City: %s\n", s1.stucity);
    printf("Standard: %s\n", s1.stustandard);
    printf("School: %s\n", s1.stuschool);
    printf("\n");
    printf("\n");
     printf("Student ID: %d\n", s2.stuid);
    printf("Name: %s\n", s2.stuname);
    printf("Age: %d\n", s2.stuage);
    printf("Course: %s\n", s2.stucourse);
    printf("City: %s\n", s2.stucity);
    printf("Standard: %s\n", s2.stustandard);
    printf("School: %s\n", s2.stuschool);
    printf("\n");
    printf("\n");
     printf("Student ID: %d\n", s3.stuid);
    printf("Name: %s\n", s3.stuname);
    printf("Age: %d\n", s3.stuage);
    printf("Course: %s\n", s3.stucourse);
    printf("City: %s\n", s3.stucity);
    printf("Standard: %s\n", s3.stustandard);
    printf("School: %s\n", s3.stuschool);
    printf("\n");
    return 0;
}

