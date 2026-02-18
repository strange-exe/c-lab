#include <stdio.h>

int main() {
    int n,c,f=0;
    printf("Enter len of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter ele %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter ele to search : ");
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        if (a[i]==c) f++;
        }
    printf("%d occurrs %d times in array\n",c,f);
}