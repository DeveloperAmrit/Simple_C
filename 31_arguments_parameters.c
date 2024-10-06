#include <stdio.h>

int sum(int a,int b);

int main(){
    
    int x,y;
    scanf("%d %d",&x,&y);
    printf("The sum of %d and %d is %d",x,y,sum(x,y));         // x and y are arguments or actual parameters

    return 0;
}

int sum(int a,int b){                   // a and b are formal parameters
    return a+b;
}