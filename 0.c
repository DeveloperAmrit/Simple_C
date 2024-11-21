#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char str[100];
    scanf("%[^$]",str);
    getchar();

    printf("|%s|",str);
}