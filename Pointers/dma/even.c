#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*p,e=0,o=0;
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",p+i);
        if (*(p+i)%2) o++;
        else e++;
    }
    free(p);
    printf("Odd count : %d\nEven count : %d\n",o,e);
}