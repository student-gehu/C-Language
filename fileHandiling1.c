//write a c progrma to count the word in txt file;

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* fp;
    char ch;
    int wordcount=0;
    fp=fopen("gehu.txt","r");
    if(fp==NULL){
        printf("file not exist\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch==' ' || ch=='\n' || ch=='\t'){
            wordcount++;
        }
    }
    fclose(fp);
    printf("number of word:%d\n",wordcount+1);
    return 0;
}