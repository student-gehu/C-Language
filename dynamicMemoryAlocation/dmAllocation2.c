#include<stdio.h>       //store 5 int size malloc of odd number
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));    // Malloc is takeing a bytes to allocate & return a pointer of type void

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    for(int i=0; i<5; i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}
