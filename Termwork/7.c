/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-7 Write a C program to check whether two strings are anagrams of each other. Both strings must 
contain exactly the same characters with the same frequency. Print “Valid Anagram” or “Not 
Anagram”.
*/

#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    int freq[26]={0};
    int i,f=1;
    printf("\n*****INPUT*****\n\n");
    printf("Enter string: ");
    gets(a);
    printf("Enter new string: ");
    gets(b);
    printf("\n*****OUTPUT*****\n\n");
    if (strlen(a)!=strlen(b)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (i=0;a[i];i++){
        if (a[i]>='A' && a[i]<='Z') a[i]+=32;
        if (b[i]>='A' && b[i]<='Z') b[i]+=32;
        freq[(a[i]-'a')]++;
        freq[(b[i]-'a')]--;
    }
    for (i=0;i<26;i++) {
        if (freq[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
}