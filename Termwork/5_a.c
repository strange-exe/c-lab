/* (a)  Pattern   
A
B C 
D E F 
G H I J  
K L M N O
*/
#include <stdio.h>
int main(){
    int n,i=0,j=0;
    char a='A';
    printf("Enter n : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            printf("%c ",a++);
        }
        printf("\n");
    }
}