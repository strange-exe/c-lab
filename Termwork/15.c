/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-15 Write a C program to read a file named “Input.txt” and create another file “Output.txt” where all
digits are removed and total number of vowels and consonants are counted and printed at the end
of the file.
*/
#include <stdio.h>
#include <ctype.h>

int isVowel(char c){
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main(){
    FILE *a = NULL, *b = NULL;
    a = fopen("Input.txt", "r");
    b = fopen("Output.txt","w");
    int x;
    int v=0,c=0;
    while ((x=fgetc(a))!=EOF){
        if (isdigit(x)) continue;
        if (isalpha(x)){
            if (isVowel(x))
                v++;
            else
                c++;
        }
        fputc(x,b);
    }
    fprintf(b,"\nTotal Vowels: %d\nTotal Consonants: %d\n",v,c);
    fclose(a);
    fclose(b);
    printf("\n*****OUTPUT*****\n\n");
    printf("Processed file written to Output.txt\nVowels : %d\nConsonants : %d\n",v,c);
}