#include<stdio.h>          // c program to toggled(change string into the upper case if it is in lower case or visa varsa)string
#include<string.h>

int main(){
    char str[30];
    int i;

    printf("Enter the string:");
    scanf("%[^\n]s",str);

    for(i=0; str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]-32;
        }else if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("toggled string is = %s" , str);
    return 0;
}