#include <stdio.h>
void main(){
int n,a=0,d=0,s=0;
printf("Enter len of array : ");
scanf("%d",&n);
char c[n];
for (int i=0;i<n;i++){
printf("Enter char %d : ",i+1);
getchar();
char y=getchar();
c[i]=y;
}
for (int i=0;i<n;i++){
if ((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z')) a++;
else if (c[i]>='0' && c[i]<='9') d++;
else s++;
}
printf("Count of chars : \n");
printf("Alphabets : %d\n",a);
printf("Digits : %d\n",d);
printf("Symbols : %d\n",s);
}
