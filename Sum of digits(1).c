#include <stdio.h>
void main(){
int n,s;
printf("\t\t\tSum of Digits\nEnter a 3 digit number : ");
scanf("%d",&n);
s=n%10;
n/=10;
s+=n%10;
n/=10;
s+=n;
printf("Sum of digits : %d\n",s);
}
