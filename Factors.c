#include <stdio.h>
void main(){
int a,i;
printf("Enter num : ");
scanf("%d",&a);
for (i=2;i=a/2;i++){
if (a%i==0) printf("%d",i);
}
}
