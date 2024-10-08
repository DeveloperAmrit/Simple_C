#include <stdio.h>

void input1DArray(int*,int);
void print1DArray(int*,int);

int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    input1DArray(arr1,n);
    print1DArray(arr1,n);
    return 0;
}

void input1DArray(int* array,int length){
    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }
}

void print1DArray(int* array,int length){
    for(int i=0;i<length;i++){
        printf("%d ",array[i]);
    }
}

// if you change any value of array in function, it changes the actual array of main