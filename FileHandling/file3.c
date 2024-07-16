#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("characters=%c\n",ch);            // same as a char we also read the integer type veriable %d with text numerics prisent
    fscanf(fptr,"%c",&ch);
    printf("characters=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("characters=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("characters=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("characters=%c\n",ch);

    fclose(fptr);
    return 0;                                                               
}
