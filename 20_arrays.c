#include <stdio.h>

void printMatrix(int rows,int columns,int matrix[rows][columns]);

int main(){
    int n;
    scanf("%d",&n);

    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printMatrix(n,n,arr1);
    
}



void printMatrix(int rows,int columns, int matrix[rows][columns]){
    for(int i=0;i<rows;i++){
        printf("|");
        for(int j=0;j<columns;j++){
            printf(" %d",matrix[i][j]);
        }
        printf(" |\n");
    }
}

// accessing array elements , a[i] , i[a], *(a+i)