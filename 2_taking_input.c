#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter number a\n");
    scanf("%d",&a);

    printf("Enter number b\n");
    scanf("%d",&b);

    printf("The sum of %d and %d is %d\n",a,b,a+b);
    printf("The differene  %d - %d is %d\n",a,b,a-b);
    printf("The multiplication of %d and %d is %d\n",a,b,a*b);
    printf("The quotienf of %d/%d is %d\n",a,b,a/b);
    return 0;
}
