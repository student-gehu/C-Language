#include<stdio.h>

// int main(){
//     char str[10];
//     int i,count=0;
//     printf("Enter the string:");
//     scanf("%s",&str);
//     for(i=0;str[i]!='\0';i++){
//         count++;
//     }
//     printf("%d",count);
// }

//using function
int strlength(char str[]){
    int i;
    for(i=0;str[i]!=0;i++){
        
    }
    return i;
}
void main(){
    int i,length;
    char str[]="Rahul";
    length=strlength(str);
    printf("%d",length);
}