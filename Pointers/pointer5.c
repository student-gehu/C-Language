#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    *ptr += 5;    // x=5
    printf("%d\n", x);    // 5
    printf("%d\n" , *ptr); //5

    return 0;
}