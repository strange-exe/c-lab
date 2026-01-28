#include <stdio.h>
void fact(int x){
long int s=1;
while (x>1){s*=x;x--;}
printf("Factorial : %ld\n",s);
}
void main(){
int x;
printf("Enter num : ");
scanf("%d",&x);
fact(x);
}
