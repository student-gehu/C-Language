#include<stdio.h>  //marks of two student in three subject

int main(){
    //2x3
    int marks[2][3];

    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;

    marks[1][0]=90;
    marks[1][1]=89;
    marks[1][2]=78;

    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][2]);

    return 0;

}