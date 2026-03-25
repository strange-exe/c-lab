#include <stdio.h>
#include <string.h>
int main(){
char a[100],b[100];
printf("Enter string : ");
gets(a);
printf("Enter new string : ");
gets(b);
for(int i=0,j=0;a[i] && b[i];i++,j++){
if (a[i]!=b[i]){
printf("Not identical\n");
return 0;
}
}
printf("Identical Strings\n");
}
