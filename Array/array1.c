#include<stdio.h>

int main(){
    float Prize[3]={100.0 , 200.0 , 300.0};
    printf("Enter three prizes:");
    /*scanf("%f",& Prize[0]);
    scanf("%f",& Prize[1]);
    scanf("%f",& Prize[2]);*/

    printf("Total Prize 1:%0.2f\n", Prize[0]+(0.18*Prize[0]));
    printf("Total Prize 2:%0.2f\n", Prize[1]+(0.18*Prize[1]));
    printf("Total Prize 3:%0.2f\n", Prize[2]+(0.18*Prize[2]));

    return 0;
}