#include <stdio.h>
int main(){
    int n,su=0,*p=&n,*s=&su;
    printf("Enter num : ");
    scanf("%d",p);
    int a[*p],*ar=a;
    for(int i=0;i<*p;i++){
        printf("Enter num ar[%d] : ",i);
        scanf("%d",ar+i);
        *s=*s+*(ar+i);
    }
    printf("Sum : %d\nAddress : %p\n",*s,s);
}