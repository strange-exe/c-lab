#include <stdio.h>

int main() {
    int n,c,x=0,y=0;
    printf("Enter len of array : ");
    scanf("%d",&n);
    int o[n],e[n];
    for(int i=0;i<n;i++){
        printf("Enter ele %d : ",i+1);
        scanf("%d",&c);
        if (c&1){
            o[x]=c;
            x++;
        }
        else{
            e[y]=c;
            y++;
        }
    }
    printf("Odd :\n");
    for(int i=0;i<x;i++){
        printf("%d ",o[i]);
    }
    printf("\nEven :\n");
    for(int i=0;i<y;i++){
        printf("%d ",e[i]);
    }
}
