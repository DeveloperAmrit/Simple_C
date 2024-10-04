#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    // 1 scanf
    char str1[100];
    scanf("%s",str1);                         // no need of & // scanf leaves a \n in the input buffer
    printf("%s",str1);
    printf("%d",strlen(str1));

    // takes string upto a whitespace (space,tab,newline)
    // cannot handle multiword input

    // Clear the newline character from the input buffer otherwise unexpected behaviour ahead
    getchar();  // This will consume the leftover '\n'
    printf("\n"); // move the next input to newline

    // 2 gets (deprecated)
    // char str2[100];
    // gets(str2);
    // printf("%s",str2);
    // printf("%d",strlen(str2));
    // take string upto newline

    // 3 fgets (reccomended)
    char str3[100];
    fgets(str3,sizeof(str3),stdin);            // fgets(string, maximum size, input from); // stdin for standard keybaord
    printf("\n%s",str3);
    printf("\n%d",strlen(str3));

    // takes string upto newline
    // counts the \n due to enter pressing after typing line
    // strlen will also count that \n
    
    printf("\n");

    // 4 getchar loop

    char str4[100];
    int i=0;
    char ch;
    while(((ch = getchar()) != '\n') && i< sizeof(str4) - 1){
        str4[i++] = ch;
    }
    str4[i] = '\0'; 

    printf("%s",str4);
    printf("%d",strlen(str4));

    // takes input upto a newline
    // modifiable , like take input upto letter a




    return 0;
}