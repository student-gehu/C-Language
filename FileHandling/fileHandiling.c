//write a c program of file handling to read a file contant and display it.

#include<stdio.h>
void main(){
    char ch;
    FILE *fp;
    fp=fopen("gehu.txt","r");
    if(fp==NULL){
        printf("file not exist");
    }else{
        printf("file exist\n");
   
    while(1){                                   //other way to use while while ((ch = fgetc(fp)) != EOF) 
        ch=fgetc(fp);
        if(ch==EOF){
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    }
}
