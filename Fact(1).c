#include <stdio.h>
void fact(){
int n;long int f=1;
printf("Enter num : ");
scanf("%d",&n);
while (n>1){f*=n;n--;}
printf("Factorial : %ld\n",f);
}
void main(){
fact();
}
