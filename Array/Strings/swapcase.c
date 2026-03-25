#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter string : ");
    gets(a);
    int i=0;
    while (a[i]){
        if (a[i]>=65 && a[i]<=90) a[i]+=32;
        else if (a[i]>=97 && a[i]<=122) a[i]-=32;
        i++;
    }
    printf("New string %s\n",a);
}
