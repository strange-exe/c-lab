#include <stdio.h>
int main(){
    int n,*mi=NULL,*ma=NULL;
    printf("Enter n : ");
    scanf("%d",&n);
    int p[n];
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",p+i);
    }
    mi=ma=p;
    for(int i=1;i<n;i++){
        if (*mi>*(p+i)) mi=p+i;
        if (*ma<*(p+i)) ma=p+i;
    }
    printf("Max : %d\nMin : %d\n",*ma,*mi);
}