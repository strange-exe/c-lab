#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*p,*a;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",p+i);
        if((*(p+i)/10) && !((*(p+i)/100))){
            *(p+i)=*(p+i)%10+(*(p+i)/10)%10;
        }
        }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    free(p);
}