
// pointer is a varible which store address of another variable
// types of pointer = type of varibale whose address it is storing
// types of pointer = int, float, char, array, string, function
// decleared with * sign

// a pointer can also store address of other pointer

#include <stdio.h>

int main(){
    int n = 6;
    int *ptr;               // * is just syntax for pointer, * donot have any role like indirection operator
    ptr = &n;

    scanf("%d",ptr);       // no & required, add we are giving the adress of n

    printf("%d",n);        // prints value of n

    printf("\n%d",ptr);    // prints adress of n which is the value of ptr

    printf("\n%d",*ptr);     // prints value of n, * working as its role of indirection operator

    int a = 3;
    int b = *&a;
    printf("\n%d == %d",a,b);     // b==a

}

// &amrit = address of amrit 
// *a = program treats value of a as an adress of some other variable and search for this address and goes for that varible's value
// * is called indirection operator

// int *p = &a : decleration and assignment of pointer
// p : address of a
// *p : follow address

// * and & are just opposite of each other
// int *i = &a;
// int j = *i      // j==a

// int* a is same as int *a