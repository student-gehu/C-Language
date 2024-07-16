#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test2.txt","w");  //from this code the value is change in text.txt file the print mango in text.txt 
    
    fputc('M', fptr);              
    fputc('A', fptr);  
    fputc('N', fptr); 
    fputc('G', fptr); 
    fputc('O', fptr);
    fclose(fptr);
    return 0;                                                               
}
