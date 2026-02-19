#include <stdio.h>
void main(){
int n,m;
printf("Enter len of array : n x m ");
scanf("%d%d",&n,&m);
int a[n][m];
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
printf("Enter ele a[%d][%d] : ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
for (int j=0;j<m;j++){
int s=0;
for (int i=0;i<n;i++){
s+=a[i][j];
}
printf("Sum of column %d : %d\n",j+1,s);
}
}
