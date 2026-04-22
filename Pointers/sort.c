#include <stdio.h>
int main(){
    int n,*p,t;
    printf("Enter num : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter ele : ");
        scanf("%d",p+i);
    }
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(*(p+i)>*(p+j)){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}