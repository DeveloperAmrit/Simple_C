#include <stdio.h>

int main(){
    int n=10;
    int* pn = &n;

    printf("The value of n is %d",n);
    printf("\nThe address of n is %x",pn);                           // %x for hexdecimal
    printf("\nThe value at address %x is %d",pn,*pn);
}


/**
Use of pointers :
> Dynamic memory allocation
> Arrays, functions and structures
> Return multiple values from a function
> pointer reduces the code and improves the perfomance
 */