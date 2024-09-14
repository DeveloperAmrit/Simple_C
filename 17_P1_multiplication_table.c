#include <stdio.h>

void multiplicationTable(int number,int tillWhat);

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);

    multiplicationTable(a,10);

}

void multiplicationTable(int number,int tillWhat){
    for(int i=1;i<=tillWhat;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
}