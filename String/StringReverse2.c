#include<stdio.h>
#include<string.h>
char *reverse(char s[]){
    int i,l;
    char t;
    l=strlen(s);
    for(i=0;i<l/2;i++){
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }
    return s;
}

int main(){
    char s[]="gunjan";
    char *rev = reverse(s);
    printf("%s",rev);
    return 0;
}