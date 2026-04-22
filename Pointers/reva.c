#include <stdio.h>
int main(){
    int n,*p,t;
    printf("Enter num : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter ele : ");
        scanf("%d",p+i);
    }
    for (int i=0;i<n/2;i++){
        t=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=t;
    }
    for (int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}