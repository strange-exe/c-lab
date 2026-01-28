#include <stdio.h>
void main(){
int a,b;
printf("Enter a and b : ");
scanf("%d%d",&a,&b);
printf("Before Swapping :\n a=%d b=%d\n",a,b);
a+=b;
b=a-b;
a=a-b;
printf("After Swapping :\n a= %d b=%d\n",a,b);
}
