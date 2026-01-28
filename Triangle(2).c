#include <stdio.h>
#include <math.h>
void main(){
int a,b,c;float s,area;
printf("Enter sides : ");
scanf("%d%d%d",&a,&b,&c);
if ((a+b)>c && (a+c)>b && (b+c)>a){
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Triangle is valid and area : %.2f\n",area);
}else{
printf("Triangle is invalid\n");
}
}
