/* Q-2 Write a C program to input a character and find whether it is number, alphabet or special symbol. */
#include<stdio.h>
int main(){
    char a;
    printf("Enter char : ");
    scanf("%c",&a);
    printf("Character is ");
    if ((a>='A' && a<='Z')|| (a>='a' && a<='z')) printf("Alphabet\n");
    else if(a>='0' && a<='9') printf("Digit\n");
    else printf("Symbol\n");
}