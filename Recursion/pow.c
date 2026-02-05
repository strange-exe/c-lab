#include <stdio.h>
int power(int x,int y){
if (y==0){
return 1;
}
return x*power(x,y-1);
}
void main(){
int x,y;
printf("Enter number and power : ");
scanf("%d%d",&x,&y);
printf("%d raised to %d : %d\n",x,y,power(x,y));
}
