#include <stdio.h>

int fabbonachi(int);

int main(){
    int n;
    scanf("%d",&n);
    printf("%dth fabbonachi is %d",n,fabbonachi(n));
}

int fabbonachi(int n){
    if(n==1 || n==0){
        return n;
    }
    else{
        return fabbonachi(n-1)+fabbonachi(n-2);
    }
}