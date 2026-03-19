#include <stdio.h>
void main(){
int n,m;
printf("Enter n, m : ");
scanf("%d%d",&n,&m);
int a[100][100]={0};
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("Enter a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("------\n");
for (int i=0;i<m;i++){
for (int j=0;i>=j;j++){
int t=a[i][j];
a[i][j]=a[j][i];
a[j][i]=t;
}
}
for (int i=0;i<m;i++){
for (int j=0;j<n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
}
