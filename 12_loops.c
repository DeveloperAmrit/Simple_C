#include <stdio.h>

int main(){
    
    // do while loop
    int i=0;
    do{
        printf("\nthe content inside do of do while loop is executed atleast one time.");
        printf("\n%d",i);
        i++;
    }while(i<5);

    // while loop
    int j=0;
    while (j<5)
    {
        printf("\nwhile loop keeps executing until the condition is true.");
        printf("\n%d",j);
        j++;
    }

    // for loop
    for (int i = 0; i < 5; i++)
    {
        printf("\n for loop has (decleration and assignment, conditon, increment or decrement)");
        printf("i is local variable of this block.");
        printf("\n%d",i);
    }
    
    
}