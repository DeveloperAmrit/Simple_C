#include <stdio.h>

int main(){
    int arr[] = {34,2,3,4,5,6};

    //(1) arr is a pointer to the fiest element of the array
    
    printf("%x",arr);            // arr is same as &arr[0]
    printf("\n%d",*arr);         // prints arr[0]

    //(2) we can assign other pointer also

    int* p = arr;              // is same as int *P = &arr[0]
    printf("\n%x",p);
    printf("\n%d",*p);        // prints arr[0]

    // (3) arr[2] gives you the third element of array | remember as pointer[index]

    printf("\n%d",p[2]);       // similarly p[2] will give you the third element

    // we can say that arr[2] = *(arr + 2)
    printf("\n%d = %d = %d",arr[2],p[2],*(arr+2));
    
    return 0;
}

/**
 * CONCLUSION :
) arr = &arr[0]
) arr[i] = *(arr + i)
) arr + i = &(arr[i])

if int* p = arr;
) just p instead of arr
) p = arr = &arr[0]
) *p = arr[0] = p[0]
) p[i] = arr[i] = *(p+i) = *(arr+i)
) p + i = &(arr[i])

 */