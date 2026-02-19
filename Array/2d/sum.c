#include <stdio.h>

int main() {
    int n,m,s=0;
    printf("Enter rows : ");
    scanf("%d",&n);
    m=n;
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Enter ele a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }
    printf("Sum of elements : %d\n",s);
}
