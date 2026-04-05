/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-14 Write a C program to read ‘n’ integers from a file named “numbers.txt”. Separate them into two
different files prime.txt such that all prime numbers are copied in prime.txt and all non_prime
numbers in non_prime.txt .
*/
#include <stdio.h>
int isprime(int n){
    int i;
    if(n<1) return 0;
    if(n<=3) return 1;
    for(i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    FILE *a=NULL,*b=NULL,*n=NULL;
    a=fopen("prime.txt","w+");
    b=fopen("non_prime.txt","w+");
    n=fopen("numbers.txt","r");
    int i,x,c,num;
    printf("\n*****INPUT*****\n\n");
    printf("Enter the number of prime numbers to read: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        fscanf(n,"%d ",&x);
        c=isprime(x);
        if(c==1){
            fprintf(a,"%d ",x);
        }
        else{
            fprintf(b,"%d ",x);
        }
    }
    printf("\n*****OUTPUT*****\n\n");
    printf("Numbers have been separated into prime.txt and nonprime.txt files.\n");
    fclose(a);
    fclose(b);
    fclose(n);
}