#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter 3 numbers : ");
scanf("%d%d%d",&a,&b,&c);
if (a>b &&  a>c){
d=a;
}
else if (b>a && b>c) {
d=b;
}
else{
d=c;
}
printf("Largest = %d",d);
}
