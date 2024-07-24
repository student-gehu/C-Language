// NOTE:- this is not a recursion function it will using the loop so it is not count in recursion function
#include<stdio.h>

// void reverseN(int);

// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     reverseN(n);
//     return 0;
// }

// void reverseN(int n){
//     for(int i=n ; i>0;i--){
//         printf("%d ",i);
//     }
// }

// ****************************************************************************************************************

//hence this is the proper recursion function

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
        printf(" %d",n);
        printN(n-1);              //here the logic is print (n-1),(n-2),(n-3).....3,2,1
    }
}



