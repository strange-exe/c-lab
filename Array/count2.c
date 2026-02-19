#include <stdio.h>
void main(){
int n,s=0;
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
if (c[i]==' ') s++;
}
printf("Count of spaces : %d\n",s);
}
