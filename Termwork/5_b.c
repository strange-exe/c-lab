/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

(b)
1 
0 1 
1 0 1  
0 1 0 1 
1 0 1 0 1 
*/

#include <stdio.h>
int main(){
    int n,i=0,j=0;
    char a=0;
    printf("\n*****INPUT*****\n\n");
    printf("Enter n : ");
    scanf("%d",&n);
    printf("\n*****OUTPUT*****\n\n");
    for (i=0;i<=n;i++){
        a=i%2;
        for (j=0;j<=i;j++){
            a=!a;
            printf("%d ",a);
        }
        printf("\n");
    }
}