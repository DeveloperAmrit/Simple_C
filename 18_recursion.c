/**
 * Recursion occurs when a function call a copy of itself
 * Complex problems can be divided into smaller ones and solved easily using recursion
 * See masala dosa example in images folder
 * 
 * The case at which function doesn't recur is called a base function
 * The instance at which the function keeps calling itself is called recursive case
 * 
 * Recursive approach is better than iterative approach
 */

#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
}

// Example 1 factorial calculator

int factorial(int n){
    if(n==1 || n==0){return 1;}
    else{return n*factorial(n-1);}
}

