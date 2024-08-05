#include<stdio.h>
#include<string.h>

int CountVowels(char str[]){
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    printf("%d",CountVowels("gunjan"));
    return 0;
}