/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-11 Write a C program to input ‘n’ integers using dynamic memory allocation. Insert a new element at
a position specified by the user and display the updated array
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*p,pos,ne,i;
    printf("\n*****INPUT*****\n\n");
    printf("Enter n : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        printf("Enter integer : ");
        scanf("%d",p+i);
    }
    printf("Enter position to add new element : ");
    scanf("%d",&pos);
    printf("Enter new element : ");
    scanf("%d",&ne);
    p=(int *)realloc(p,(n+1)*sizeof(int));
    for (;i>=pos;i--) p[i]=p[i-1];
    p[i]=ne;
    printf("\n*****OUTPUT*****\n\n");
    printf("\nUpdated array : ");
    for(int i=0;i<=n;i++) printf("%d ",*(p+i));
    free(p);
}