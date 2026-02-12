#include<stdio.h>

int insert(int a[],int n,int s,int e){
for(int i=n;i>s;i--){
a[i]=a[i-1];
}
a[s]=e;
printf("List after insertion : ");
for (int i=0;i<n+1;i++){
printf("%d ",a[i]);
}
printf("\n");
}
void main(){
int n,s,e;
printf("Enter num of elements : ");
scanf("%d",&n);
int a[n+1];
for (int i=0;i<n;i++){
printf("Enter element %d : ",i+1);
scanf("%d",&a[i]);
}
printf("Enter index to insert : ");
scanf("%d",&s);
printf("Enter ele to insert : ");
scanf("%d",&e);
insert(a,n,s,e);
}
