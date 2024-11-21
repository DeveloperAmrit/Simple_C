#include <stdio.h>
#include <string.h>

// intitialization

struct Student{
    char name[50];
    char roll[20];
    int nOfCourses;
    char courses[10][50];
    int marks[10];
};

// intitilization + object decleration

struct Employee{
    char name[50];
    char id[20];
    char position[50];
    int salary;
}e1,e2,e3;

int main(){
    
    // object decleration
    struct Student s1;
    strcpy(s1.name,"Amrit");
    strcpy(s1.roll,"B24CM1008");
    s1.nOfCourses = 3;
    strcpy(s1.courses[0],"Electrical");
    strcpy(s1.courses[1],"Computer");
    strcpy(s1.courses[2],"Maths");
    s1.marks[0] = 30;
    s1.marks[1] = 10;
    s1.marks[2] = 20;

    printf("%s",s1.courses[0]);
    return 0;
}