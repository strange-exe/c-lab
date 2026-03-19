#include <stdio.h>
#include <string.h>
void main(){
char a[100];
printf("Enter string : ");
gets(a);
// fgets(a,100,stdin);
printf("Entered string : ");
int c=puts(a);
char b[100];
int i=0;
for (i=0;a[i];i++){
b[i]=a[c-i-2];
}
b[i]='\0';
printf("Reversed string : ");
puts(b);
}
