#include<stdio.h>

void calculatePrize(float value);

int main(){
    float value = 1000.0;
    calculatePrize(value);
    return 0;
}


void calculatePrize(float value){
    value=value+(0.18*value);
    printf("the final value is : %f",value);
}