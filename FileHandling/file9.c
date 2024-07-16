#include<stdio.h>   // Make a program to input student information from a user & enter it to a file;
int main(){
    FILE *fptr;
    fptr= fopen("student.txt","w");        // if we use w then if the file is not exist it will create automatically 

    char name[100];
    int age;
    float cgpa;

    printf("enter name: ");
    scanf("%s",&name);
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr, "student name :%s\t" ,name);
    fprintf(fptr, "student age :%d\t" ,age);
    fprintf(fptr, "student cgpa :%f\t" ,cgpa);

    fclose(fptr);
    return 0;
}
