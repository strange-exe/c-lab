#include <stdio.h>
int main(){
    int n,*p,pos;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",p+i);
    }
    printf("Enter position to delete : ");
    scanf("%d",&pos);
    pos--;
    for(int i=pos;i<n;i++){
        *(p+i)=*(p+i+1);
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",*(p+i));
    }
}