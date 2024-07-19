#include<stdio.h>

int main() {
    int arr[10][10];
    int i, j, m, sum; 

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
        sum = 0; // Initialize sum for each row
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);       //Inside the nested loop, we print the value of each element of the matrix row by row. The %d format specifier is used to print integers.
            sum += arr[i][j]; // Add each element to sum
        }
        printf(" - Sum of row %d: %d\n", i + 1, sum); // By adding 1 to i using i + 1, we shift the row numbering by 1. For example, if i is 0, then i + 1 evaluates to 1, which represents the first row of the matrix.
    }

    return 0;
}
