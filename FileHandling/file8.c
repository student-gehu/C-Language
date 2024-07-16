#include<stdio.h>     //Make a program to read 5 integer from a file.

int main(){
    FILE *fptr;
    fptr=fopen("Test4.txt","r");
    int n;

    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);

    fclose(fptr);
    return 0;
}
