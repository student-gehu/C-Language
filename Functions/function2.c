#include<stdio.h>            //using function print greating in both language indian and french 
void namasta();
void bonjour();

int main(){
    printf("Enter the f for frence or i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namasta();
    }else{
        bonjour();
    }
    return 0;
}

void namasta(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}

