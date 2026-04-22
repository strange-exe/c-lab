#include <stdio.h>
void change(int n,int *s,int *p){
    *s=0;
    *p=1;
    while(n){
        *s=*s+n%10;
        *p*=n%10;
        n/=10;
    }
}
int main(){
    int n,s,p;l.
    printf("Enter num : ");
    scanf("%d",&n);
    change(n,&s,&p);
    printf("Num : %d\nSum of digits : %d\nProduct of digits : %d\n",n,s,p);
}