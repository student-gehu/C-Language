#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test2.txt","w");  //from this code the value is change in text.txt file the print mango in text.txt 
    
    fprintf(fptr,"%c",'M');              
    fprintf(fptr,"%c",'A');  
    fprintf(fptr,"%c",'N'); 
    fprintf(fptr,"%c",'G'); 
    fprintf(fptr,"%c",'O');
    fclose(fptr);
    return 0;                                                               
}
