#include<stdio.h>             //print table of given number and sum of a and b using function 
int sum(int a , int b);
void printTable(int n);

int main(){
    int a , b , n ;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    printTable(n);              //argument , actual perimeter
    return 0;
}

int sum(int a , int b){
    return a+b;
}

void printTable(int n){                  //perimeter / for
    for(int i=1;i<=10;i++){
        printf("%d\n", i*n);
    }
}