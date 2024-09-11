#include <stdio.h>

int main(){
    
    long long int password = 9123012;

    // break

    while (1){
        long long int a;
        printf("Enter your password\n");
        scanf("%lld",&a);
        if(password==a){
            break;
        }
        else{
            printf("Wrong password!\n");
        }
    }
    
    // continue

    int i=0;
    while (i<5){
        i++;
        if(i==3){
            continue;                // will jump direclty to next iteration skipping the lines written below closing brakcert }       
        }
        // these below lines
        printf("\n%d",i);
    }
}