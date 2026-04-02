#include <stdio.h>
int main(){
    int a,c=0;int *p,*q;
    printf("Enter digit : ");
    scanf("%d",&a);
    p=&a;
    q=&c;
    *q=*p%10;
    *p=*p/10;
    if (*p) printf("Num is Multi-digit\n");
    else printf("Num is Single digit\n");
}
