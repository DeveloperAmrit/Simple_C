#include <stdio.h>
#include <string.h>

// typedef is used to give alternative name to some data types
// syntax : typedef <previous name> <alias name>;

typedef long long int lli;

// for strcutures

typedef struct Student{
    char name[50];
    int roll;
    int marks[5];
} std;

int main(){

    // 1 simple
    lli a = 5;
    printf("%d",a);
    return 0;

    // 2 structures 
    // can use direct structure name and .
    struct Student s1;
    strcpy(s1.name,"Amrit");
    s1.roll = 9;


    // can use alias structure name and ->
    std s2;
    strcpy(s2.name,"Alok");

    // 3 pointers

    int *c,d;                    // only c is pointer, d is simple int

    typedef int* intPointer;
    intPointer a,b;             // both a and b are pointers
}