#include <stdio.h>
#include <math.h>
void main(){
int a,b,c;
float x,y;
printf("Enter coefficients a,b and c : ");
scanf("%d%d%d",&a,&b,&c);
if ((b*b-4*a*c)>0){
x=(-b-sqrt(b*b-4*a*c))/2*a;
y=(-b+sqrt(b*b-4*a*c))/2*a;
printf("Roots are x = %0.2f and y = %0.2f\n",x,y);
}else if ( (b*b-4*a*c)==0){
x=(-b/2*a);
printf("Roots are same : x = %.2f\n",x);
}else {
printf("Roots are imaginary\n");
}
}
