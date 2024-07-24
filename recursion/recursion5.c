// write a recursive function to calculate product of first n natural numbers
#include<stdio.h>
// int productN(int n);
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int result=productN(n);
//     printf("product of first %d natural number is %d",n,result);
//     return 0;
// }

// int productN(int n){
//     if(n==0){
//         return 1;             //Base Case: The function productN should return 1 when n is 0 because the product of no numbers is defined to be 1.
//     }else{
//         return n*productN(n-1);
//     }
// }

// write a recursive function to print binary equivalent of a decimal number
#include<stdio.h>
void printBinary(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printBinary(n);
    printf(" is Binary equivalent of %d ",n);
    return 0;
}

void printBinary(int n){
    if(n==0){
        return;        //Base Case: The function printBinary does nothing when n is 0.     
    }else{
        printBinary(n/2);
        printf("%d",n%2);
    }
}
