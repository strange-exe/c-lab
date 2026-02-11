#include <stdio.h>
void main(){
int i,n,s,c=0;
printf("Enter number of elements : ");
scanf("%d",&n);
int a[n];
for (i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i-1]);
}
printf("Enter number to search : ");
scanf("%d",&s);
for (i=0;i<n;i++){
if(a[i]==s){
c=1;
break;
}
}
if (c) printf("Element found at index : %d\n",i);
else printf("Element not found\n");
}
