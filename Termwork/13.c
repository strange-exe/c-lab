/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-13 Create a structure named “Employee” to store employee details: Employee ID, Name, Department
and Salary.
(a) Write a function to display employees earning salary above a given amount.
(b) Write a function to search employee details using Employee ID.
*/
#include <stdio.h>
#include <string.h>
struct Employee{
    int Emp_ID;
    char Name[100];
    char Department[100];
    float Salary;
};
void display(struct Employee e[],int n,float amount){
    int i;
    printf("\nEmployees earning above %.2f :\n",amount);
    for (i=0;i<n;i++){
        if (e[i].Salary>amount){
            printf("Employee ID : %d\n",e[i].Emp_ID);
            printf("Name : %s\n",e[i].Name);
            printf("Department : %s\n",e[i].Department);
            printf("Salary : %.2f\n\n",e[i].Salary);
        }
    }
}
void search(struct Employee e[],int n,int id){
    int i;
    for (i=0;i<n;i++){
        if (e[i].Emp_ID==id){
            printf("\nEmployee details for ID %d :\n",id);
            printf("Name : %s\n",e[i].Name);
            printf("Department : %s\n",e[i].Department);
            printf("Salary : %.2f\n\n",e[i].Salary);
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n",id);
}
int main(){
    int n,i,id;
    float amount;
    struct Employee e[100];
    printf("\n*****INPUT*****\n\n");
    printf("Enter number of employees : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("\n<---Employee %d--->\n",i+1);
        printf("Employee ID : ");
        scanf("%d",&e[i].Emp_ID);
        getchar();
        printf("Name : ");
        gets(e[i].Name);
        printf("Department : ");
        gets(e[i].Department);
        printf("Salary : ");
        scanf("%f",&e[i].Salary);
    }
    printf("\nEnter salary amount to filter employees : ");
    scanf("%f",&amount);
    printf("\n*****OUTPUT*****\n\n");
    display(e,n,amount);
    printf("\n*****INPUT*****\n\n");
    printf("\nEnter Employee ID to search details : ");
    scanf("%d",&id);
    printf("\n*****OUTPUT*****\n\n");
    search(e,n,id);
}