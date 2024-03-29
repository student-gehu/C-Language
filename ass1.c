#include<stdio.h>

void transpose(int m, int n, int arr[][n]){
    int mat[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[j][i]=arr[i][j];
        }
    }
    // Print the transposed matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m,n;
    printf("Enter the no of rows & columns: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];

    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transposed matrix:\n");
    transpose(m,n,arr);
    return 0;
}
