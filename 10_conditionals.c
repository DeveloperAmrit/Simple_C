#include <stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    printf("You have entered your age as %d",age);

    if(age>18){
        printf("\nYou can vote");
    }
    else if(age>10){
        printf("\nWait to vote");
    }
    else{
        printf("\nHow can you even think of voting");
    }

    printf("\nWhich exams have to passed? enter 1 for pass 0 for fail");
    int m,s;
    printf("\nMaths\n");
    scanf("%d",&m);
    printf("Science\n");
    scanf("%d",&s);
    if(m && s){
        printf("45 wala gift");
    }
    else if(m || s){
        printf("15 wala gift");
    }
    else{
        printf("No gift");
    }
}