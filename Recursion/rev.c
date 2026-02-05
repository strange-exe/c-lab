#include <stdio.h>
int rev(int n,int c){
if (n>0){
return rev(n/10,c*10+n%10);
}
else return c;
}
void main(){
int n;
printf("Enter num : ");
scanf("%d",&n);
printf("Reversed num : %d\n",rev(n,0));
}
