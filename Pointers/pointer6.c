#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 5;

    (*ptr)++;    //x=6
    printf("%d\n", x);    // 6
    printf("%d\n" , *ptr); //6

    return 0;
}