#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter string : ");
    gets(a);
    int v=0,c=0;
    for (int i=0;a[i];i++){
        if (a[i]>='A' && a[i]<='Z') a[i]+=32;
    }
    for (int i=0;a[i];i++){
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') v++;
        else if ((a[i]>='a' && a[i]<='z')) c++;
    }
    printf("Vowels : %d\nConsonants : %d\n",v,c);
}