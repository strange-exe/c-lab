#include <stdio.h>

int mu(int a[],int n){
int c=0;
for (int i=0;i<n;i++){
if (a[i]%5==0) c+=1;
}
return c;
}

void main(){
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
int a[n];
for (int i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i-1]);
}
printf("Number elements multiple of 5 : %d\n",mu(a,n));
}
