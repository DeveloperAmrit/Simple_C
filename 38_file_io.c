#include <stdio.h>
#include<stdlib.h>

int main(){

    // reading content till whitespace or newline
    char fileContent[100];
    FILE* file1 = fopen("./38.txt","r");
    fscanf(file1,"%s",fileContent);             // stops at whitespace
    printf("%s",fileContent);
    fclose(file1);

    // writing a file
    char message[100] = "Hello everyone";
    FILE* file2 = fopen("./38.txt","w");
    fprintf(file2,"%s",message);
    fclose(file2);

    // appending a file
    char additionMessage[] = "\nThis is additional content.";
    FILE* file3 = fopen("./38.txt","a");
    fprintf(file3,"%s",additionMessage);    

}