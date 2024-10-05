#include <stdio.h>

int fabbonachi(int);
int fibbonachiIterative(int n);

int a=0;

int main(){
    int n;
    scanf("%d",&n);
    printf("%dth fabbonachi by recursion is %d",n,fabbonachi(n));                        // slow as f(i) is caculated many times
    printf("\n%dth fabbonachi by iteration is %d",n,fibbonachiIterative(n));                // fast as f(i) is calculated only one time
    printf("\n%d how many times fib(19) was calculated",a);
}

int fabbonachi(int n){
    if(n==19)a++;
    if(n==1 || n==0){
        return n;
    }
    else{
        return fabbonachi(n-1)+fabbonachi(n-2);
    }
}

int fibbonachiIterative(int n){
    int a =0;
    int b =1;
    for(int i=0;i<n-1;i++){
        int c = a;
        a = b;
        b = c+b;
    }
    return b;
}