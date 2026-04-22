#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,s,*p;
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter ele : ");
        scanf("%d",p+i);
    }
    printf("Enter search element : ");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(*(p+i)==s){
            printf("Element found at index %d\n",i);
            *(p+i)=*(p+i)**(p+i)**(p+i);
            break;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    free(p);
}