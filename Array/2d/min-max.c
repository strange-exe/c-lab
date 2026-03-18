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
int ma=a[0][0],mi=a[0][0];
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
if (ma<a[i][j]){
ma=a[i][j];
}
if (mi>a[i][j]){
mi=a[i][j];
}
}
}
printf("Min : {%d}\nMax : {%d}",mi,ma);
}else{
printf("Not a square matrix\n");
}
}
