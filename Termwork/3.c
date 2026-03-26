/* Q-3 Write a C program to print the Fibonacci Series upto N Terms using recursion */
#include <stdio.h>
void fib(int n,int a,int b){
    int c;
    if (n){
        c=a+b;
        printf("%d ",c);
        fib(n-1,b,c);
    }
    else return;
}
int main(){
    int n,a=0,b=1;
    printf("Enter terms : ");
    scanf("%d",&n);
    if (n==1) printf("%d",a);
    else if (n>=2) printf("%d %d ",a,b);fib(n-2,a,b);
    printf("\n");
}