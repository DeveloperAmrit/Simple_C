#include <stdio.h>

int main(){
    int a = 34;
    int *pa = &a;

    printf("%d\n",pa);
    printf("%d",pa+1);
    return 0;
}