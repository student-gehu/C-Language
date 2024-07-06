#include<stdio.h>
// int main(){
//     int a=2,b=4;

//     printf("before swap a=%d and b=%d",a,b);

//     a=a*b;
//     b=a/b;
//     a=a/b;

//     printf("\n after swap a=%d and b=%d",a,b);
// }

// int main(){
//     int a=10,b=20,c;
//     printf("before swap a=%d and b=%d",a,b);

//     c=a;
//     a=b;
//     b=c;
//     printf("\n after swap a=%d and b=%d",a,b);
// }

// int main(){
//     int a=2,b=4;

//     printf("before swap a=%d and b=%d",a,b);

//     a=a^b;
//     b=a^b;
//     a=a^b;

//     printf("\n after swap a=%d and b=%d",a,b);
// }

// int main(){
//     int a=2,b=4;

//     printf("before swap a=%d and b=%d",a,b);

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     printf("\n after swap a=%d and b=%d",a,b);
// }

int main(){
    int a=2,b=4;

    printf("before swap a=%d and b=%d",a,b);

   b=(a+b)-(a=b);

    printf("\n after swap a=%d and b=%d",a,b);
}