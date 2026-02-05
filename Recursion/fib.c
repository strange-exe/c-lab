#include <stdio.h>
int fib(int n,int a,int b){
int c;
if (n){
c=a+b;
a=b;
b=c;
printf("%d ",c);
fib(n-1,a,b);}
else return 0;
}
int main(){
int n,a=0,b=1;
printf("Enter terms : ");
scanf("%d",&n);
if (n==1) printf("%d",a);
else if (n>=2) printf("%d %d ",a,b);fib(n-2,a,b);
printf("\n");
}
