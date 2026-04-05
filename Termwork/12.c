/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-12 Create a structure named “Book” having fields: Book_ID, Title, Author and Price. Accept details
of ‘n’ books and sort the records in descending order of price and display the sorted list.
*/
#include <stdio.h>
#include <string.h>
struct Book{
    int Book_ID;
    char Title[100];
    char Author[100];
    float Price;
};
int main(){
    int n,i,j;
    struct Book b[100],temp;
    printf("\n*****INPUT*****\n\n");
    printf("Enter number of books : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("\n<---Book %d--->\n",i+1);
        printf("Book ID : ");
        scanf("%d",&b[i].Book_ID);
        getchar();
        printf("Title : ");
        gets(b[i].Title);
        printf("Author : ");
        gets(b[i].Author);
        printf("Price : ");
        scanf("%f",&b[i].Price);
    }
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if (b[j].Price<b[j+1].Price){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("\n*****OUTPUT*****\n\n");
    for (i=0;i<n;i++){
        printf("Book ID : %d\n",b[i].Book_ID);
        printf("Title : %s\n",b[i].Title);
        printf("Author : %s\n",b[i].Author);
        printf("Price : %.2f\n\n",b[i].Price);
    }
}