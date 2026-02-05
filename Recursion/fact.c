#include <stdio.h>
long int fact(int n){
if (n==0 || n==1){
return 1;
}
return n*fact(n-1);
}
void main(){
int n;
printf("Enter num : ");
scanf("%d",&n);
printf("Factorial of %d : %ld\n",n,fact(n));
}
