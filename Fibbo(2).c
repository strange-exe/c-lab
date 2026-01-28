#include <stdio.h>
void main(){
int n,a=0,b=1,c;
printf("Enter num : ");
scanf("%d",&n);
printf("%d %d",a,b);
while ((n-2)>0){
c=a+b;
a=b;
b=c;
n--;
printf(" %d",c);
}printf("\n");}
