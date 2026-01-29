#include <stdio.h>
void fibbo(int n){
int a=0,b=1,c;
if (n<=1)printf("%d",a);
else{
printf("%d %d ",a,b);
n-=2;
while(n>0)
{c=a+b;a=b;b=c;
printf("%d ",c);
n--;}
}
printf("\n");
}
void main(){
int n;
printf("Enter number of terms : ");
scanf("%d",&n);
fibbo(n);
}
