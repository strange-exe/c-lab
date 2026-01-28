#include <stdio.h>
void main(){
int n,c=0,s=0;
printf("Enter number : ");
scanf("%d",&n);
for (;n>0;n/=10){
c+=1;
s+=n%10;
}
printf("Number of digits : %d\nSum of digits ; %d\n",c,s);
}
