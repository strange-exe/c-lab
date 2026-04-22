#include <stdio.h>
#include <string.h>
int main(){
char a[100];
printf("Enter string : ");
gets(a);
char *i=a,*j=a+strlen(a)-1;
while (i<j) {
if (*i!=*j) {
printf("Not palindrome\n");
return 0;
}
i++,j--;
}
printf("Palindrome\n");
}