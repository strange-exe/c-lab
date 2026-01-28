#include <stdio.h>
long int cube(int x){
return (long)x*x*x;
}
void main(){
int x;
printf("Enter num : ");
scanf("%d",&x);
printf("%ld\n",cube(x));
}
