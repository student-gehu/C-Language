#include<stdio.h>    //fibonacchi sequence using function
int fib(int n);
int main(){
    printf("%d",fib(6));   //Enter the any number in the bracket of fib and you will get fibonacchi number up to that
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    } 
    
    int fibnm1= fib(n-1);
    int fibnm2= fib(n-2);
    int fibn  =fibnm1+fibnm2;

    printf(",%d",n,fibn);
    return fibn;
}
