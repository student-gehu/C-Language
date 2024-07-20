#include<stdio.h>
void main(){
   struct employee{
        int a,b,c;
   };
   typedef struct employee emp;
   emp e1={1,2,3};
   emp e2={49,88,47};
   emp *p , *q;
   p=&e1 ;
   q=&e2 ;
//    printf("%d\n", (*p).a); 
//    printf("%d\n", (*q).b);

//by using arrow operator
printf("%d\n",p->a);
printf("%d\n",q->b);           //Arrow operatore used in sturcture pointer
}
