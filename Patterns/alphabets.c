#include <stdio.h>
int main(){
char c='A';
int i=1;
for (;i<5;i++){
for (int j=1;j<=i;j++){
printf("%c ",c++);
}
printf("\n");
}
}
