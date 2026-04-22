#include <stdio.h>
#include <string.h>
struct Student{
    char name[20];
    int roll;
    char sec;
};
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    struct Student s[n];
    for (int i=0;i<n;i++){
        getchar();
        printf("Enter student %d details :-: \n",i+1);
        printf("Enter name : ");
        gets(s[i].name);
        printf("Enter roll number : ");
        scanf("%d",&s[i].roll);
        printf("Enter section : ");
        scanf(" %c",&s[i].sec);
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (s[j].name>s[j+1].name){
                struct Student t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    printf("\nStudent details (Sorted) : \n");
    for (int i=0;i<n;i++){
        printf("\nName : %s\nRoll No. : %d\nSec : %c\n",s[i].name,s[i].roll,s[i].sec);
    }
}