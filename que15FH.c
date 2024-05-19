#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    char name[100];
    int Roll_Number;
    struct Data{
       int d,m,y;
    }doa,dob;
}stu;


void display(stu s1);
int main(){
    stu s1;

    printf("Enter Name OF First Student:");
    scanf("%[^\n]s",s1.name);

    printf("Enter Roll Number:");
    scanf("%d",&s1.Roll_Number);

    printf("Enter data of birth");
    scanf("%d%d%d",&s1.dob.d,s1.dob.m,s1.dob.y);

    printf("enter date of admission:");
    scanf("%d%d%d",&s1.doa.d,s1.doa.m,s1.doa.y);

    display(s1);
    return 0;
}

void display(stu s1){
    printf("\nname of student:%s",s1.name);
    printf("\nRoll Number :%d",s1.Roll_Number);
    printf("\ndate of birth:%d/%d/%d",s1.dob.d,s1.dob.m,s1.dob.y);
    printf("\nDate of Addmission%d/%d/%d",s1.doa.d,s1.doa.m,s1.doa.y);
}

