#include<stdio.h>

int fib(int n){
    if(n==1||n==2){
        return n-1;        //logic here: first value of series is 0 (if 1 so n-1 is 0) or second value is 1 (n==2 n-1 = 1)
    }else{
        return (n-1)+fib(n-2);
    }
}

int main(){
    int result=fib(7);
    printf("%d",result);
    return 0;
}