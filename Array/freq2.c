#include <stdio.h>

int main() {
    int n;
    printf("Enter len of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        printf("Enter ele %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        int f=0,c=0;
        for (int j=0;j<k;j++){
            if (a[i]==b[j]){
                c=1;
                break;
            }
        }
        if (c==0){
            b[k]=a[i];
            k++;
            for (int z=0;z<n;z++){
                if (a[z]==a[i]) f++;
            }
            printf("%d occurs %d times in array\n",a[i],f);
        }
    }
}