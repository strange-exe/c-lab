#include <stdio.h>
#include <math.h>
void arm(int n){
int x,d,s=0;
x=n;
while (n>0){d+=1;n/=10;}
n=x;
while (n>0){s+=pow(n%10,d);n/=10;}
if (s==x) printf("Armstrong\n");
else printf("Not armstrong\n");
}
void main(){
int n;
printf("Enter : ");
scanf("%d",&n);
arm(n);
}
