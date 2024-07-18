#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    int sp=0,nl=0,nt=0;
    fp=fopen("gehu.txt","w");
    if(fp==NULL){
        printf("file connot be create!");
    }else{
        printf("Enter data in file:");
        
        while(1){
            ch=getchar();
            if(ch==EOF) break;
            fputc(ch,fp);
        }
        fclose(fp);
        
        fp=fopen("gehu.txt","r");
        if(fp==NULL){
            printf("file connot be open!");
        }else{
            while(1){
                ch=fgetc(fp);
                if(ch==EOF)break;
                if(ch=='\n') nl++;
                if(ch=='\t') nt++;
                if(ch==' ') sp++;
            }
            printf("\n total line=%d",nl);
            printf("\n total tabs=%d",nt);
            printf("\n total space=%d",sp);
        }
        fclose(fp);
    }
}
