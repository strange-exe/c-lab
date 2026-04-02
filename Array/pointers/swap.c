#include <stdio.h>
int main(){
    int a,b;int *p,*q,*r;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Numbers before swapping : a=%d, b=%d\n",*p,*q);
    *r=*p;
    *p=*q;
    *q=*r;
    printf("Numbers after swapping : a=%d, b=%d\n",*p,*q);
}

