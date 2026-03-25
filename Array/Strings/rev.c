#include <string.h>
#include <stdio.h>
void main(){
char a[100];
printf("Enter string : ");
gets(a);
int i=0;
while (a[i]) i++;
int j=0;
i--;
char t;
while (j<i){
t=a[j];
a[j]=a[i];
a[i]=t;
j++,i--;
}
printf("Reversed : ");
puts(a);
}
