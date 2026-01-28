#include <stdio.h>
void main(){
int n; long int s=0;
printf("Enter n : ");
scanf("%d",&n);
//s=n*(n+1)/2;
//printf("Sum using formula : %ld\n",s);
//for (;n>0;n--) s+=n;
//printf("Sum using for : %ld\n",s);
//while (n>0){s+=n;n--;}
//printf("Sum using while : %ld\n",s);
do {s+=n;n--;}while(n>0);
printf("Sum of natural numbers : %ld\n",s);
}
