#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*p;
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    free(p);
}