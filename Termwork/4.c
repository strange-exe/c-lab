/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-4 Sum of 1^2 -2^2 +3^2 -4^2………………………upto n terms.
*/

#include <stdio.h>
int main(){
    int n,s=0;
    printf("\n*****INPUT*****\n\n");
    printf("Enter n : ");
    scanf("%d",&n);
    printf("\n*****OUTPUT*****\n\n");
    for (int i=1;i<=n;i++){
        if (i%2) s+=i*i;
        else s-=i*i;
    }
    printf("Sum of series upto %d terms : %d\n",n,s);
}