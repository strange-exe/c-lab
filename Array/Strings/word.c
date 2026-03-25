#include <string.h>
#include <stdio.h>
void main(){
char a[100];
int c=1;
printf("Enter string : ");
gets(a);
int i=0;
while (a[i]==' ') i++;
for (i;a[i];i++){
if ((a[i]==' ' && a[i+1]!=' ') && (a[i]==' ' && a[i+1]!='\n') && (a[i]==' ' && a[i+1]!='\0')){
c++;
}
}
printf("Num of words in %s is %d\n",a,c);
}

