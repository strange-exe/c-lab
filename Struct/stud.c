#include <stdio.h>
struct student{
    char name[20],sec;
    int roll;
    float marks[4],per;
};
int main(){
    int n,t;
    float x;
    printf("Enter num of students : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        getchar();
        printf("Enter name : ");
        gets(s[i].name);
        printf("Enter sec : ");
        scanf("%c",&s[i].sec);
        printf("Enter roll : ");
        scanf("%d",&s[i].roll);
        for(int j=0;j<4;j++){
            printf("Enter marks of sub %d : ",j+1);
            scanf("%f",&s[i].marks[j]);
            s[i].per += s[i].marks[j];
        }
        s[i].per /= 4;
    }
    x=s[0].per;
    for (int i=1;i<n;i++){
        if(s[i].per > x){
            x=s[i].per;
            t=i;
        }
    }
    printf("Student with highest percentage:\n");
    printf("Name : %s\nSec : %c\nRoll : %d\nPercentage : %.2f\n",s[t].name,s[t].sec,s[t].roll,s[t].per);
}