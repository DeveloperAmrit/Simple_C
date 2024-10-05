#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4};

    printf("The address of 0th index is %d",arr);
    printf("\nThe value at address of 0th index is %d",*arr);

    printf("\nThe adress of 1st index is %d",arr+1);
    printf("\nThe value at address of 1st index is %d",*(arr+1));

    int* p =arr;

    printf("\n p = arr = &arr[0]");
    printf("\n *p = *arr = arr[0]");
    printf("\n *(p+i) = *(arr + i) = arr[i]");

    return 0;
}