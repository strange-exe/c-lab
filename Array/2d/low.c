#include <stdio.h>
void main(){
int n,m;
printf("Enter n, m : ");
scanf("%d%d",&n,&m);
if (n==m){
int a[n][m];
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("Enter a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Matrix : \n");
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
int ma=a[0][m-1];
for (int i=0;i<n;i++){
for(int j=0;i>=j;j++){
if (ma < a[i][m-j-1]) ma=a[i][m-j-1];
}
}
printf("Max : %d",ma);
}
else printf("Not a square matrix");
}

