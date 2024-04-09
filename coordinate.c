#include<stdio.h>
#include<math.h>

int main() {
    double x1 , y1 , x2 , y2;

    //input coordinate of point A
    printf("enter the x-coordinate of point A:");
    scanf("%lf", & x1);

    printf("enter the y-coordinate of point A:");
    scanf("%lf", & y1);

    //input coordinate of point B
    printf("enter the x-coordinate of point B:");
    scanf("%lf", & x2);

    printf("enter the y-coordinate of point B:");
    scanf("%lf", & y2);

    //calculate the distance using the distance formula

    double distance =sqrt(pow(x2-x1,2)+pow(y2-y1,2));       //formula root(x2-x1)^2+(y2-y1)^2

    printf("the distance between point A and point B is %lf\n",distance);

    return 0 ;
}