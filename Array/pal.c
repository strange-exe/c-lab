#include <stdio.h>

int pal(int n){
int x=n,r=0;
while(x>0){
r=r*10+x%10;
x/=10;
}
if (r==n){
return 1;
}
return 0;
}

void main(){
int n,c=0;
printf("Enter number of elements : ");
scanf("%d",&n);
int a[n];
for (int i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i-1]);
c+=pal(a[i-1]);
}
printf("Number of palindromes : %d\n",c);
}
