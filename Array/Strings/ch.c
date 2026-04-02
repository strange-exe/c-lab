#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter string : ");
    gets(str);
    int a=0,d=0,s=0;
    for(int i=0;str[i];i++){
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) a++;
        else if(str[i]>='0' && str[i]<='9') d++;
        else s++;
    }
    printf("Counts are :\nAlphabets : %d\nDigits : %d\nSpecial characters : %d\n",a,d,s);
}