#include<stdio.h>        //writr a program to store the the n fibonacci number
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    
    printf("%d , %d",fib[0],fib[1]);

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf(", %d ",fib[i]);
    }
    printf("\n");
    return 0;
} 