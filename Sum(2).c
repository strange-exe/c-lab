#include <stdio.h>
void sum(int x){
int s=0;
while (x>0){s+=x%10;x/=10;}
printf("Sum : %d",s);
}
void main(){
int x;
printf("Enter num : ");
scanf("%d",&x);
sum(x);
}
