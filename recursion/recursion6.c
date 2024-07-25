//write a recursive function to calculate sum of digit of a given number 

#include<stdio.h>
int Sumdig(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int result=Sumdig(n);           // Call the function and store the result
    printf("the sum of digits %d number is %d\n",n,result);
    return 0;
}

int Sumdig(int n){
    if(n==0){
        return 0;                  
    }else{
        return Sumdig(n/10)+(n%10);        
    }
}