#include <stdio.h>
#include <string.h>
void main(){
char a[100];
printf("Enter string : ");
gets(a);
// fgets(a,100,stdin);
printf("Entered string : ");
puts(a);
}
