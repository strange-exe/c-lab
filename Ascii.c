#include<stdio.h>
int main(){
char a;
printf("Enter char : ");
scanf("%c",&a);
if ((a>=65 && a<=90)|| (a>=97 && a<=122)) printf("Alphabet\n");
else if(a>=48 && a<=57) printf("Digit\n");
else printf("Symbol\n");
}
