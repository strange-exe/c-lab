/* 
Theory question but was interesting 
*/
#include <stdio.h>
int main() {
    int n,c=0,x;
    printf("Enter num : ");
    scanf("%d",&n);
    x=n;
    while(x>0){
        x/=16;
        c++;
    }
    x=n;
    int a[c];
    int i=c-1;
    while(x>0){
        a[i]=x%16;
        x/=16;
        i--;
    }
    for(i=0;i<c;i++){
        if (a[i]>9 && a[i]<16){
            printf("%c",'A'+(a[i]-10));
        }
        else{
        printf("%d",a[i]);
        }
    }
}