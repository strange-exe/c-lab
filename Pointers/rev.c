#include <stdio.h>
int main(){
    int n,*p=&n,*r;
    printf("Enter num : ");
    scanf("%d",p);
    *r=0;
    while(*p){
    *r=*r*10+*p%10;
    *p/=10;
    }
    printf("Rev : %d\n",*r);
}