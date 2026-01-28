#include<stdio.h>
void main(){
int n,c=0;
printf("Enter num : ");
scanf("%d",&n);
for (int i=2;i<=n/2;i++){
if (n%i==0){
c=1;
break;
}
}
if (c==1){
printf("Not prime\n");
}
else{
printf("Prime\n");
}
}
