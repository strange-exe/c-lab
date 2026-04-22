#include <stdio.h>
int main(){
    int n,*p,ne,pos;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",p+i);
    }
    printf("Enter new ele : ");
    scanf("%d",&ne);
    printf("Enter position to enter new ele : ");
    scanf("%d",&pos);
    pos--;
    for(int i=n;i>pos;i--){
        *(p+i)=*(p+i-1);
    }
    *(p+pos)=ne;
    for(int i=0;i<n+1;i++){
        printf("%d ",*(p+i));
    }
}