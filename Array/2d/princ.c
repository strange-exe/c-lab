#include <stdio.h>
void main(){
int n,m;
printf("Enter n,m : ");
scanf("%d%d",&n,&m);
if (n==m){
int a[n][m];
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("Enter a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}
for (int i=0;i<n;i++){
printf("%d ",a[i][i]);
}
}
else{
printf("Not a square matrix\n");
}
}
