#include <stdio.h>
void main(){
int n,m,s=0;
printf("Enter len of array : n x m ");
scanf("%d%d",&n,&m);
int a[n][m];
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("Enter ele a[%d][%d] : ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
if (i==j){
s+=a[i][j];
}
}
}
printf("Sum of diagonal : %d\n",s);
}
