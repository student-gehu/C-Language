#include<stdio.h>

void printN(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printN(n);
    return 0;
}

void printN(int n){
    if(n>0){
        printN(n-1);      //here the logic is 1,2,3,4.....(n-2)(n-1)(n)
        printf(" %d",n);
    }
}