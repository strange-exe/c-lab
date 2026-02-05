#include <stdio.h>
void main(){
int n,s=0;
printf("Enter number of elements to add : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i]);
s+=a[i];
}
printf("Elements in array are : \n");
for (int i=0;i<n;i++){
printf("%d\n",a[i]);
}
printf("Sum of elements : %d\nAverage : %d\n",s,s/n);
}
