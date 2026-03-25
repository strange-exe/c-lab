#include <stdio.h>
#include <string.h>
void main(){
char a[100];
printf("Enter string : ");
gets(a);
char b[100];
printf("Enter string : ");
gets(b);
int i=0;
while (a[i]) i++;
for (int j=0;b[j];j++,i++){
a[i]=b[j];
}
printf("Concatinated : ");
puts(a);
}
