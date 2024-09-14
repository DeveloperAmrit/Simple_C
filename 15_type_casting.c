#include <stdio.h>

int main(){
    int a = 3;
    float b = 5.79;

    printf("The d value of a is %d",a);
    printf("\nThe f value of a is %f",(float)a);        // will not work without (float)

    printf("\nThe d value of b is %d",(int)b);          // will not work without (int)
    printf("\nThe f value of b is %f",b);

    printf("\nThe c value of a is %c", (char)a);        // not gonna print string "3"
    printf("\nThe c value of b is %c", (char)b);
}