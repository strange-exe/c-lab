#include <stdio.h>

void sort(int a[],int n){
int i,j,t;
for (i=0;i<n-1;i++){
	for (j=i+1;j<n;j++){
		if (a[i]>a[j]){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
for (i=0;i<n;i++){
	printf("%d ",a[i]);
}
}
void main(){
int n,i;
printf("Enter number of elements : ");
scanf("%d",&n);
int a[n];
for (i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i-1]);
}
sort(a,n);
}
