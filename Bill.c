#include <stdio.h>
void main(){
int units,dsc=0;float bill,rate;
printf("Enter units consumed : ");
scanf("%d",&units);
printf("Enter rate : ");
scanf("%f",&rate);
bill=units*rate;
if (units>500){
bill-=500;
dsc=500;
}else if (units>100){
bill-=100;
dsc=100;
}
printf("Final bill = %.2f\nRate : %0.2f\nTotal Discount = %d\n",bill,rate,dsc);
}

