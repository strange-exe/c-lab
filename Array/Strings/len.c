#include <string.h>
#include <stdio.h>
void main(){
char a[100];
printf("Enter string : ");
gets(a);
int i=0;
while (a[i]) i++;
printf("Len of %s is %d\n",a,i);
}

