/* (b)
1 
0 1 
1 0 1  
0 1 0 1 
1 0 1 0 1 
*/
#include <stdio.h>
int main(){
    int n,i=0,j=0;
    char a=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            a=!a;
            printf("%d ",a);
        }
        printf("\n");
    }
}