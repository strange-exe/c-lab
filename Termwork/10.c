/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-10 Write a C program to store a predefined email ID using static initialization. Accept an email ID 
from the user and compare both using pointers. The comparison must be case insensitive. Print 
“Valid Email” or “Invalid Email”.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char email[100],defemail[100]="abhinesh.exe@gmail.com",*e,*d;
    printf("\n*****INPUT*****\n\n");
    printf("Enter email : ");
    gets(email);
    e=email;
    d=defemail;
    int i=0,j=0;
    while (e[i]){
        if (e[i]>='A' && e[i]<='Z') e[i]+=32;
        i++;
    }
    printf("\n*****OUTPUT*****\n\n");
    strcmp(e,d)?printf("Not Valid\n"):printf("Valid\n");
    return 1;
}
