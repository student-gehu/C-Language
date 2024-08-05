#include<stdio.h>                    // will the address output be same?

void printAddress(int n);

int main(){
    int n=4;
    printf("%p\n",&n);
    printAddress(n);

    return 0;
}
//call by value
void printAddress(int n){
    printf("%p\n",&n);
}

// nope the address is not the same 
// if it is call by reference it will give the same output  Ex:- by using pointers
// for make is call by reference simply change void printAddress(int *n)  & printAddress(&n)
// if want the value in number form simply use the %u unsigned int it will through the warning but you will get the address in number form;