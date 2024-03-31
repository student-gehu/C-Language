#include<stdio.h> //sum of digonal of a matrix

int main() {
    int arr[10][10];
    int i, j, m, sum = 0; 

    printf("Enter the size of the matrix: ");
    scanf("%d", &m);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]); 
        }
    }

    printf("Matrix entered:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if ((i+j)==m-1){
                sum=sum+arr[i][j]; 
            }
        }
    }
    printf("The sum of the dignal is:%d",sum);    
    return 0;
}
