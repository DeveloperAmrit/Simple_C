#include <stdio.h>

int main(){
    int expression;
    scanf("%d",&expression);

    switch (expression)
    {
    case 1:
        printf("Welcome admin");
        break;
    case 2:
        printf("\nWelcome worker");                   // if not breaked then all below cases including default will also be executed. 
    case 3:
        printf("\nWelcome user");
    default:
        printf("\ndefault runs if none of the cases are true");
        break;
    }
}

// Rules :
/**
 * switch expression must be an int or a char     , not float
 * case value must be an int or a char            , not float
 * case must lie inside switch
 * break is not a must
 */