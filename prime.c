#include <stdio.h>
void prime(int a,int b){
int c=0;
for (a;a<=b;a++){
c=0;
for (int i=2;i<=a/2;i++){
if (a%i==0) { c=1; break;}
}
if (c==0) printf("%d ",a);
}
printf("\n");
}
void main(){
int a,b;
printf("Enter range sep by space : ");
scanf("%d%d",&a,&b);
prime(a,b);
}
