#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr=(float *)calloc(5,sizeof(float));      //in calloc funtion itnis continuous allocation intilize with 0;

    for(int i=0; i<=5; i++){
        printf("%f\n",ptr[i]);
    }

    return 0;
}