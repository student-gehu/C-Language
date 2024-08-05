#include<stdio.h>           // swap 2 number using pointers of using function, a & b 
void swap(int a , int b);
void _swap(int *a , int *b);

int main(){
    int x=3 , y=5;
    swap( x , y);
    _swap(&x , &y);
    printf("x=%d & y=%d\n" , x , y);
    printf("x=%d & y=%d\n" , x , y);

    return 0;
}
//call by value
void swap(int a , int b){
    int t = a;
    a = b;
    b = t;

    printf("a=%d & b=%d\n", a , b);
}
//call by referance
void _swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;

    printf("a=%d & b=%d\n", *a , *b);
}