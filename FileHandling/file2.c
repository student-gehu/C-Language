#include<stdio.h>  // check if a file exists before reading from it.

int main(){
    FILE *fptr;
    fptr=fopen("test1.txt","r");       // if we use the w in place of r the new file test1.txt is autometacly generated
    if(fptr == NULL){
        printf("file does't exist\n");
    }else{
        fclose(fptr);
    }

    return 0;
}

