#include <stdio.h>
int sum(int x){
int s=0;
while (x>0){s+=x%10;x/=10;}
return s;
}
void main(){
int x;
printf("Enter num ; ");
scanf("%d",&x);
printf("Sum : %d",sum(x));
}
