#include <stdio.h>
#include <string.h>
int main(){
char a[100],b[100];
printf("Enter string : ");
gets(a);
printf("Enter new string : ");
gets(b);
strcmp(a,b)?printf("Not Identical\n"):printf("Identical Strings\n");
}
