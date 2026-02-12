#include<stdio.h>

int rev(int a[],int n,int st,int e){
int t;
for(int i=st,j=e;i<j;i++,j--){
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("Reverse list : ");
for (int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
}
void main(){
int n,st,e;
printf("Enter num of elements : ");
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++){
printf("Enter element %d : ",i+1);
scanf("%d",&a[i]);
}
printf("Enter start & end index : ");
scanf("%d%d",&st,&e);
rev(a,n,st,e);
}
