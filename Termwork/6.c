/* Q-6 Write a C program to insert n elements in an array and replace each element of the array by its 
reverse. */
#include <stdio.h>
int rev(int n){
    int s=0;
    while (n){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        a[i]=rev(a[i]);
    }
    printf("\nArray : ");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}