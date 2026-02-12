#include<stdio.h>

int delete(int a[],int n,int s){
for(int i=n-1;i>s;i--){
a[i]=a[i-1];
}
printf("List after deletion : ");
for (int i=0;i<n-1;i++){
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
printf("Enter index to delete : ");
scanf("%d",&s);
delete(a,n,s);
}
