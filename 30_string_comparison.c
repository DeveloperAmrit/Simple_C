#include <stdio.h>
#include <string.h>

int main(){
    char* str1 = "Amrit";
    char* str2 = "Amrit";

    int a = strcmp(str1,str2);     // pass pointer to the strings, will return 0 if both the strings are equal
    printf("%d",a);                 
    return 0;
}