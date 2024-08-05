#include<stdio.h>
#include<string.h>
char *reverse(char s[]){
    char temp[20];
    int i,j;
    int l=strlen(s);
    for(i=l-1,j=0;i>=0;i--,j++){
        temp[j]=s[i];             //all reversing is done here 
    }
    temp[j]='\0';
    for(i=0;s[i];i++){
        s[i]=temp[i];             // after reverse we put reverse string in real array of string
    }
    temp[i]='\0';
    return s;
}

int main(){
    char s[]="gunjan";
    char *rev = reverse(s);
    printf("%s",rev);
    return 0;
}

// logic for a first for loop
// i = 4 (last index of "Rahul"), j = 0.
// temp[0] = s[4] → temp[0] = 'l'.
// i = 3, j = 1.
// temp[1] = s[3] → temp[1] = 'u'.
// i = 2, j = 2.
// temp[2] = s[2] → temp[2] = 'h'.
// i = 1, j = 3.
// temp[3] = s[1] → temp[3] = 'a'.
// i = 0, j = 4.
// temp[4] = s[0] → temp[4] = 'R'.
// After this loop, temp contains "luhaR".