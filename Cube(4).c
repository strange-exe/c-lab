#include <stdio.h>
long int cube(){
int x;
printf("Enter num : ");
scanf("%d",&x);
return (long)x*x*x;
}
void main(){
printf("%ld\n",cube());
}
