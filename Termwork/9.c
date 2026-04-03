/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-9 Write a C program to input a matrix of order m x n and print its saddle point. If there is no saddle 
point then print a message no saddle point.(Note: A saddle point in a matrix is an element that is 
simultaneously the minimum in its row and the maximum in its column.)
*/

#include <stdio.h>
#include <string.h>
int main(){
    int n,m,s=0,k;
    printf("\n*****INPUT*****\n\n");
    printf("Enter m,n : ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for (int i=0;i<m;i++) for (int j=0;j<n;j++){
        printf("Enter a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }printf("\n*****OUTPUT*****\n\n");
    for (int i=0;i<m;i++){
        int min=a[i][0],col=0;
        for (int j=1;j<n;j++) if (a[i][j]<min){
                min=a[i][j];
                col=j;
            }for (k=0;k<m;k++) if (a[k][col]>min) break;
        if (k==m){
            printf("Saddle Point = %d at (%d,%d)\n",min,i,col);
            s=1;
        }
    }if (s==0) printf("No saddle point\n");
}