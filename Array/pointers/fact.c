#include <stdio.h>
int main(){
    int a,f=1;int *p,*q,*r;
    printf("Enter digit : ");
    scanf("%d",&a);
    p=&a;
    q=&f;
    while(*p){
        *q*=*p;
        *p=*p-1;
    }
    printf("Factorial : %d\n",*q);
}