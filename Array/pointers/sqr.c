#include <stdio.h>
void scu(int n,int m,int *p,int *q){
    int s=(n>m)?m:n;
    int l=(m>n)?m:n;
    *p=s*s;
    *q=l*l*l;
}
int main(){
    int n,m,c,s;
    printf("Enter 2 num : ");
    scanf("%d%d",&n,&m);
    scu(n,m,&s,&c);
    printf("Sqr : %d\nCube : %d\n",s,c);
}