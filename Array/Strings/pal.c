#include <stdio.h>
#include <string.h>
int main(){
char a[100],b[100];
printf("Enter string : ");
gets(a);
int i=0,j=0;
while (a[i]) i++;
i--;
for (j;j<i;j++,i--){
if (a[j]!=a[i]){
printf("Not palindrome\n")
;return 0;
}
}
printf("Palindrome\n");
}
