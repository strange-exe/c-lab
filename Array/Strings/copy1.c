#include <string.h>
#include <stdio.h>
void main(){
char a[100],b[100];
printf("Enter a string : ");
gets(a);
strcpy(b,a);
printf("String %s copied from %p to %p\n",b,&a,&b);
}
