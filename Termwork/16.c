/*Name : Abhinesh Kumar Gangwar
University Roll No. : 2028614
Section : G

Q-16 Write a C program to store details of ‘n’ products: Product name, Product ID, Quantity and Price.
Store the data in a file “product.txt”. Retrieve and display the records of products whose total cost
is greater than 10,000 and store these records in another file “expensive.txt”.
*/
#include <stdio.h>
struct prod{
    int id;
    char name[50];
    int qty;
    float price;
};
int main(){
    FILE *a=NULL,*b=NULL;
    a=fopen("product.txt","w");
    b=fopen("expensive.txt","w");
    int n;
    printf("\n*****INPUT*****\n\n");
    printf("Enter number of products: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        struct prod x;
        printf("Enter product %d details: \n",i+1);
        getchar();
        printf("Product Name : ");
        gets(x.name);
        printf("Enter Product ID, Quantity and Price: ");
        scanf("%d %d %f",&x.id,&x.qty,&x.price);
        fprintf(a,"Product Id : %d\nProduct Name : %s\nQuantity : %d\nPrice : %.2f\n\n",x.id,x.name,x.qty,x.price);
        if (x.qty*x.price > 10000){
            fprintf(b,"Product Id : %d\nProduct Name : %s\nQuantity : %d\nPrice : %.2f\n\n",x.id,x.name,x.qty,x.price);
        }
    }
    fclose(b);
    b=fopen("expensive.txt","r");
    printf("\n*****OUTPUT*****\n\n");   
    printf("Expensive products are : \n");
    struct prod x;
    while (fscanf(b,"Product Id : %d\nProduct Name : %[^\n]\nQuantity : %d\nPrice : %f\n\n",&x.id, x.name, &x.qty, &x.price) == 4){
        printf("Product Id : %d\nProduct Name : %s\nQuantity : %d\nPrice : %.2f\n\n",x.id,x.name,x.qty,x.price);
    }
    fclose(a);
    fclose(b);
}