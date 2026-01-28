#include <stdio.h>
int sum(){
int x,s=0;
printf("Enter num : ");
scanf("%d",&x);
while (x>0){s+=x%10;x/=10;}
return s;
}
void main(){
printf("Sum : %d",sum());
}
