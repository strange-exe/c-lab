#include <stdio.h>
int main(){
int y;
printf("Enter year : ");
scanf("%d",&y);
if (y%400==0){
printf("Leap Year\n");
}
else if ( y%100!=0 && y%4==0 ){
printf("Leap Year\n");
}
else{
printf("Not a Leap Year\n");
}
}
