//write a c program to write some contant in a file and display into a output screen 

#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE* fp;
    char ch;
    fp=fopen("gehu.txt","w");
    if(fp==NULL){
        printf("file can't be create!");
    }else{
        printf("Enter txt into file:\n");

        while(1){
            ch=getchar();
            if(ch==EOF){
                break;
            }
            fputc(ch,fp);
        }
        fclose(fp);

    fp=fopen("gehu.txt","r");
    if(fp==NULL){
        printf("file can't be create!");
    }else{
        printf("Content of a file!!\n");

    while(1){
            ch=fgetc(fp);
            if(ch==EOF){
                break;
            }
            putchar(ch);
        }
        fclose(fp);
    }
}}