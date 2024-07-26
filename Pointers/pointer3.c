#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    //value
    printf("%d\n",age);           //22
    printf("%d\n", *ptr);        //22
    printf("%d\n", *(&age));      //22

    return 0;
}
