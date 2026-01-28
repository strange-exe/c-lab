#include <stdio.h>
void cube(int x){
printf("%ld\n",(long)x*x*x);
}
void main(){
int x;
printf("Enter num : ");
scanf("%d",&x);
cube(x);
}
