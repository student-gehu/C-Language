#include<stdio.h>
#include<math.h>
double Pow(double x , double y);
int main(){
    double x,y;
    printf("Enter a number x:");
    scanf("%lf",&x);
    printf("Enter a number y:");
    scanf("%lf",&y);
    double result=Pow(x,y);           // Call the function and store the result
    printf("%.2lf\n",result);
    return 0;
}

double Pow(double x , double y){
    if(y==0){
        return 1; 
    }if(y>0){
        return pow(x,y-1)*x; 
    }else{
        return 1/x*pow(x,y+1);
    }
}