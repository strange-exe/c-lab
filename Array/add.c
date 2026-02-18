#include <stdio.h>

int main() {
    int n, m;
    printf("Enter length of array 1: ");
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        printf("Enter ele %d: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter length of array 2: ");
    scanf("%d", &m);
    int b[m];
    for (int i=0; i<m;i++){
        printf("Enter ele %d: ",i+1);
        scanf("%d", &b[i]);
    }
    int max=(n>m)?n:m,min=(n<m)?n:m;
    int c[max];
    for (int i=0; i<min; i++)
        c[i]=a[i]+b[i];
    if (n>m){
        for (int i=min; i<n; i++)
            c[i]=a[i];
    }
    else{
        for (int i=min; i<m; i++)
            c[i]=b[i];
    }
    printf("\nResult array:\n");
    for (int i=0; i<max; i++)
        printf("%d ", c[i]);
}