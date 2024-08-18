#include <stdio.h>

int main(void){

    int a = 4;
    float b  = 2.34593456;

    printf("a is %d\nb is %f\n",a,b);
    printf("a is %f\nb is %d\n",a,b);

    printf("%.3f\n",b);            // rounds off to that decimal value
    printf("%10.3f\n",b);          // takes 10 chracter space , causes some space before
    printf("%-10.3f",b);           // takes 10 character space, causes some space after     

}

/*
%c = character
%d = integer
%a.bf = floating point number
%l = long
%lf = double
%Lf = long double

*/