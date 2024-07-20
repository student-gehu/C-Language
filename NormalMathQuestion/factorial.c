#include<stdio.h>
int main(){
    int i,fact=1,n;

    printf("Enter the value of n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The value of factorial is %d ",fact);

    return 0;
}
