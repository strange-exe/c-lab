#include <stdio.h>
int Sum(int a[],int n){
int s=0;
for (int i=0;i<n;i++) s+=a[i];
return s;
}

void main(){
int n,s;
printf("Enter number of elements : ");
scanf("%d",&n);
int a[n];
for (int i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i-1]);
}
s=Sum(a,n);
printf("Sum : %d\nAvg : %.2f\n",s,(float)s/n);
}
