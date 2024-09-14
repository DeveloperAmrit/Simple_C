/**
 * Profit of using functions:
 * Avoid rewriting same logic many times
 * Can divide work among programmers
 * Easy debugging 
 */

#include <stdio.h>

// decleration of functions (step 1)
int sum(int a,int b);

int main(){
    int p,q,r;
    scanf("%d %d",&p,&q);

    // calling function (step 3)
    printf("Sum is %d",sum(p,q));                   // what we pass to function are called arguments
}

// defining function (step 2)
int sum(int a,int b){                                // what function requires are called parameters 
    return a+b;                                      
}