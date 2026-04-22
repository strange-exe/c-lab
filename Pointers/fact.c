#include <stdio.h>
int main() {
    int a,f=1,*p=&a,*q=&f;
    printf("Enter digit: ");
    scanf("%d",&a);
    for (;*p>0; (*p)--) *q*=*p;
    printf("Factorial: %d\n",*q);
}