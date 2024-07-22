#include<stdio.h>            //convert the temperature into celcius to ferenhite using function

float convertTemp(float celcius);

int main(){
    printf("the temp in farenhite is :%f", convertTemp(37));        //function call  / actual perimeter
     
    return 0;
}

float convertTemp(float celcius){                   // formal perimeter
    float far=celcius*(9.0/5.0)+32;
    return far;
}