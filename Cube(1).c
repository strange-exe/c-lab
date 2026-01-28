#include <stdio.h>
void cube(){
int n;long int c;
printf("Enter number : ");
scanf("%d",&n);
c=n*n*n;
printf("%d Cube = %ld\n",n,c); 
}
void main(){
cube();
}
