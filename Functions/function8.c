#include<stdio.h>

int calculatePercentage(int maths , int physics , int chemestry);

int main(){
    int maths=78;
    int physics=94;
    int chemestry=80;
    printf("the percentage of the rahul is %d", calculatePercentage(maths ,physics ,chemestry));
    return 0;
}                                           

int calculatePercentage(int maths , int physics , int chemestry){
    return((maths + physics + chemestry)/3);                                                      
}