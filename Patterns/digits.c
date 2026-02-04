#include <stdio.h>
int main(){
int i=1,n=0;
for (;i<5;i++){
for (int j=1;j<=i;j++){
printf("%d ",n++);
}
printf("\n");
}
}
