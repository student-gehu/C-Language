#include<stdio.h>

void main(){
    struct node{
        int data;
        struct node*link;
    };
    struct node n1,n2;

    n1.data=45;
    n1.link=&n2; // Linking n1 to n2
    n2.data=59;
    n2.link=NULL;

    printf("n1.data=%d\n",n1.data);
    printf("n2.data=%d\n",n2.data);
    
    // Accessing n2.data through n1.link
    if(n1.link != NULL) {
        printf("n1.link->data=%d\n", n1.link->data);
    } else {
        printf("n1.link is NULL\n");
    }
}
