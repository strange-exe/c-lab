#include <stdio.h>
#include <math.h>
long int fact(int n){
if (n==0 || n==1){
return 1;
}
return n*fact(n-1);
}
void series(int n){
float s=0;static float p;static long int f;
for(int i=1;i<=n;i++){
p=pow(i,i);f=fact(i);
printf("%.1f/%ld ",p,f);
s+=p/f;
}
printf("Sum : %.2f\n",s);
}
void main(){
int n;
printf("Enter n : ");
scanf("%d",&n);
series(n);
}
