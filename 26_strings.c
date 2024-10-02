#include <stdio.h>
#include <string.h>       // for strlen and strcpy
#include <stdlib.h>       // for malloc

int main(){

    // 1 Array type string decleration

    char str1[20] = "Hello";                // 'Hello' + '\0'  
    printf("%s",str1);
    printf("\n%d",strlen(str1));           // strlen doesnot count the null terminator in length of string
    /*
    Here, "Hello" takes 6 spaces (5 characters + 1 null terminator), and the remaining 14 elements of the array are uninitialized.
    strlen will return 5, it doesnot count null terminator
    */

    // 2 Array type string decleration without array length

    char str2[] = "Hwllo";         // Equivalent to str[6] = "Hwllo"  
    printf("\n%s",str2);
    printf("\n%d",strlen(str2));

    // yes the declration length counts the null character  but strlen donot

    // 3 Pointer to a string 

    char *str3 = "Helloworld";       // points to a string located in read-only memory
    printf("\n%s",str3);
    printf("\n%d",strlen(str3));

    // cannot modify str3 later as readonly memory

    // 4 Array of individual characters

    char str4[6] = {'A', 'm', 'r', 'i', 't', '\0'};
    printf("\n%s",str4);
    printf("\n%d",strlen(str4));

    // 5 strcpy method

    char str5[6];
    strcpy(str5,"Aloka");

    printf("\n%s",str5);
    printf("\n%d",strlen(str5));

    // 6 Dynmaic allocation of strings

    char *str6 = (char *)malloc(6*sizeof(char));
    strcpy(str6,"Hallo");
    printf("\n%s",str6);
    printf("\n%d",strlen(str6));

    // donot forget to free the memeory
    free(str6);


    return 0;


}

/**
 * String is not a datatype in c.
 * We represent string as an array of characters ending with Null terminator \0
 */