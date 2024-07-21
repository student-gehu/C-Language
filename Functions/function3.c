#include<stdio.h>

int sum(int a , int b);
int a,b;

int main(){
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);

    int s = sum(a,b);                    // actual perimeter  or argument
    printf("sum is : %d\n",s);
    return 0;
}

int sum(int a , int b){            // formal perimeter 
    return a+b;
}