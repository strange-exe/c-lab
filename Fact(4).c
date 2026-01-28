#include <stdio.h>
long int fact(int x){
long int s=1;
while (x>1){s*=x;x--;}
return s;
}
void main(){
int x;
printf("Enter num : ");
scanf("%d",&x);
printf("Factorial : %ld\n",fact(x));
}
