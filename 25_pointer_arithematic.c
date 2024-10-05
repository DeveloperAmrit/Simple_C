#include <stdio.h>

int main(){
    int a = 34;
    int* pa = &a;

    // +i means +(i times sizeof int)

    printf("%d",pa);
    printf("\n%d",pa+1);
    printf("\n%d",pa+2);          // pa+1 is not same as pa+2 

    // printf("\n%d",*(pa-8));     //may take you to invalid memory location
    return 0;
}