#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    for (size_t i = 1; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
