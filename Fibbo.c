#include <stdio.h>
void main(){
int n,i=1,a=0,b=1,c;
printf("Enter num : ");
scanf("%d",&n);
printf("%d %d ",a,b);
for (;i<=n-2;i++){
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
}
