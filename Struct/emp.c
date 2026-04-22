#include <stdio.h>
#include <string.h>
struct Employee{
    int Emp_ID;
    char Name[100];
    float Salary;
};
int main(){
    int n,i,id;
    float amount;
    struct Employee e[100];
    printf("Enter number of employees : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("\n<---Employee %d--->\n",i+1);
        printf("Employee ID : ");
        scanf("%d",&e[i].Emp_ID);
        getchar();
        printf("Name : ");
        gets(e[i].Name);
        printf("Salary : ");
        scanf("%f",&e[i].Salary);
    }
    printf("\nEmployees earning above 10,000 :\n");
    for (i=0;i<n;i++){
        if (e[i].Salary>10000){
            printf("Employee ID : %d\n",e[i].Emp_ID);
            printf("Name : %s\n",e[i].Name);
            printf("Salary : %.2f\n\n",e[i].Salary);
        }
    }
}