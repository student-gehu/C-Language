#include<stdio.h>       //using funtion find the area of rectangle circle and square 

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float a=5.0;
    float b=10.0;
    float side=25.0;
    float rad=20.0;

    printf("area of a rectangle: %f\n", rectangleArea(a,b));    // argument and actual perimeter
    printf("area of a circle: %f\n", circleArea(rad));
    printf("area of a square: %f\n", squareArea(side));
    return 0;

}

float squareArea(float side)           // formal perimeter
{
    return side*side;
}

float circleArea(float rad)
{
    return 3.14*rad*rad;
}

float rectangleArea(float a, float b)
{
    return a*b;
}
