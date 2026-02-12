#include<stdio.h>

int rev(int a[],int n){
int t;
for(int i=0;i<n/2;i++){
t=a[i];
a[i]=a[n-i-1];
a[n-i-1]=t;
}
printf("Reverse list : ");
for (int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
}
void main(){
int n,s,e;
printf("Enter num of elements : ");
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++){
printf("Enter element %d : ",i+1);
scanf("%d",&a[i]);
}
rev(a,n);
}
