#include <stdio.h>
long int fact(){
int x;long int s=1;
printf("Enter num :");
scanf("%d",&x);
while (x>1){s*=x;x--;}
return s;
}
void main(){
printf("Factorial : %ld\n",fact());
}
