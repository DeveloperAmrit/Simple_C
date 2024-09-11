// NOTE : use of goto is highly discouraged 

// because it reduces code readability and increases complexity in flow of code


#include <stdio.h>

int main(){

    // label1:
    //     printf("Hello we are inside label");                    // Will cause infinite loop
    // printf("This wil also repeat");
    // goto label1;

    // goto lable2;
    // label2:                                                    // label must be defined before goto
    //     printf("We are inside goto");


    label3:                                        //2
        printf("Hello we are inside label3");               
        goto label4;                                      
    
    goto label3;                                   //1           
    label4:                                        //3
        printf("\nWe are inside label4");
    printf("\nThankyou");                          //4
}