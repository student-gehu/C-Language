#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;   //0

    printf("x=%d\n", x);   //0
    printf("*ptr = %d\n",*ptr); //0

    return 0;
}