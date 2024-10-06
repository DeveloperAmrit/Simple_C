#include <stdio.h>

void func1(int*);
void swapTwoNumbers(int* a, int* b);

int main(){
    int x = 5;

    // 1
    func1(&x);
    printf("The value of x changed to %d",x);

    // 2 If you try to change a varible of function (returns &a) from main, will get error as local varibles are destroyed when function exectuion ends.  

    // example : swapping two numbers
    int i=7,j=8;
    printf("\n%d%d",i,j);
    
    swapTwoNumbers(&i,&j);
    printf("\n%d%d",i,j);

    return 0;
}

void func1(int* p){

    // dereferencing
    *p = 10;                    // changed the value of varible of main function
}

void swapTwoNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}