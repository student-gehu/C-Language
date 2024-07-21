#include<stdio.h>
//declaration or prototype
void printHello();
void printGoodbye();

int main(){
    printHello();  //funtion call
    printHello();
    printHello();
    printGoodbye();
    return 0;
}

// funtion definition
void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Goodbye!\n");
}