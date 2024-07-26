#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    //address
    //printf("%p\n",&age);
    printf("%u\n",&age);    // same value 635...

    printf("%u\n", ptr);    // same value 635...

    printf("%u\n", &ptr);

    return 0;
}
