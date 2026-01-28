#include <stdio.h>
void sum(){
int x,s=0;
printf("Enter num : ");
scanf("%d",&x);
while (x>0){s+=x%10;x/=10;}
printf("Sum : %d",s);
}
void main(){
sum();
}
