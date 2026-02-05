#include <stdio.h>
int pd(int n){
if (n==0) return 1;
return n%10*pd(n/10);
}
int main(){
int n;
printf("Enter num : ");
scanf("%d",&n);
printf("Product of digits of %d : %d\n",n,pd(n));
}
