#include <string.h>
#include <stdio.h>
void main(){
char a[100],b[100];
printf("Enter a string : ");
gets(a);
int i=0;
while (a[i]) b[i]=a[i],i++;
printf("String %s copied from %p to %p\n",b,&a,&b);
}
