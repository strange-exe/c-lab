/* Q-8 Write a C program to input a square matrix and check whether it is a symmetric matrix or not. 
If symmetric, print “Matrix is Symmetric”, otherwise print “Matrix is Not Symmetric”. */
#include <stdio.h>
int main(){
    int n,i,j,f=1;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++) for(j=0;j<n;j++){
        printf("Enter a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("Matrix : \n");
    for (i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (a[i][j]!=a[j][i]){
                f=0;
                break;
            }
        }
        if (!f) break;
    }
    if (f) printf("Matrix is Symmetric\n");
    else printf("Matrix is not Symmetric\n");
}
