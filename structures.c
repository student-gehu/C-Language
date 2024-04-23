#include<stdio.h>

typedef struct Employee {
    char name[100];
    int empcode , salary;
    struct dateofbirth{
        int d,m,y;
    }dob;
}emp;

void display(emp e1);
void main(){
    emp e1;
    printf("Enter the name:");
    scanf("%[^\n]s",e1.name );
    printf("Enter empcode:");
    scanf("%d",&e1.empcode);
    printf("Enter salary:");
    scanf("%d",&e1.salary);
    printf("Enter date of birth:");
    scanf("%d%d%d",&e1.dob.d, &e1.dob.m , &e1.dob.y);
    display(e1);
}

void display(emp e1){
    printf("\nname=%s",e1.name);
    printf("\nemploy code=%d",e1.empcode);
    printf("\nsalary=%d",e1.salary);
    printf("\n%d/%d/%d",e1.dob.d, e1.dob.m , e1.dob.y);
}
