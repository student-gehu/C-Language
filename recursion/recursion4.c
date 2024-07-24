//write a recusive function to calculate sum of first n natural numbers
#include<stdio.h>
// int sumN(int n);
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int result=sumN(n);           // Call the function and store the result
//     printf("the sum of first %d natural number is %d\n",n,result);
//     return 0;
// }

// int sumN(int n){
//     if(n==0){
//         return 0;                  // Base case: the sum of the first 0 numbers is 0
//     }else{
//         return n+sumN(n-1);        // Recursive case: add current number to the sum of previous numbers
//     }
// }

// ****************************************************************************************************************

//write a recursive function to calculate sum of first n odd natural numbers
// int sumOddN(int n);
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int result=sumOddN(n);           // Call the function and store the result
//     printf("the sum of first %d natural number is %d\n",n,result);
//     return 0;
// }

// int sumOddN(int n){
//     if(n==0){
//         return 0;                  // Base case: the sum of the first 0 numbers is 0
//     }else{
//         return (n*2-1)+sumOddN(n-1);        // Recursive case: add current number to the sum of previous numbers
//     }
// }
// logic
// sumOddN(5) returns 9 + sumOddN(4)
// sumOddN(4) returns 7 + sumOddN(3)
// sumOddN(3) returns 5 + sumOddN(2)
// sumOddN(2) returns 3 + sumOddN(1)
// sumOddN(1) returns 1 + sumOddN(0)
// sumOddN(0) returns 0 (base case).

//output -> sumOddN(5) = 9 + 7 + 5 + 3 + 1 + 0 = 25

// ****************************************************************************************************************

//write a recursive function to calculate sum of first n even natural numbers
int sumEvenN(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int result=sumEvenN(n);           // Call the function and store the result
    printf("the sum of first %d natural number is %d\n",n,result);
    return 0;
}

int sumEvenN(int n){
    if(n==1){
        return 2;                  // Base case: the sum of the first 0 numbers is 0
    }else{
        return (n*2)+sumEvenN(n-1);        // Recursive case: add current number to the sum of previous numbers
    }
}