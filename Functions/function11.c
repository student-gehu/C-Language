#include<stdio.h>     // transpose of a matrix
void transpose(int m, int n,int arr[][n]){
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){       //print transpose of a matrix
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m,n;
    int mat[m][n];
    printf("Enter the no of rows & column:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the element of a matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    transpose(m,n,arr);
   
    return 0;
}
