#include <stdio.h>
void main(){
int n,r=0,t;
printf("Enter num ; ");
scanf("%d",&n);
t=n;
while(t>0){
r=r*10+t%10;
t/=10;
}
if (n==r) printf("Palindrome\n");
else printf("Not Palindrome\n");
}

