// q->1  write a recursive function to print square of first N natural numbers
#include<stdio.h>

// void printN(int);
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     printN(n);
//     return 0;
// }

// void printN(int n){
//     if(n>0){
//         printN(n-1);  
//         printf(" %d",n*n);    
//     }
// }

// ****************************************************************************************************************

//q->2 write a recursive function to print n even natural numbers

// void printN(int);
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     printN(n);
//     return 0;
// }

// void printN(int n){
//     if(n>0){
//         printN(n-1);  
//         printf(" %d",n*2);    
//     }
// }

// ****************************************************************************************************************

//q->3 write a recursive function to print first n odd natural numbers
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
        printN(n-1);  
        printf(" %d",n*3);    
    }
}