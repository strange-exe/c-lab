/* Q-1 Write a C program to find roots of quadratic equation.  
Sample Input: Enter coefficients a, b and c: 4 1 0  
Sample Output: Roots are real numbers..... Roots are: 0.00 and -0.25 
*/
#include <stdio.h>
#include <math.h>
void main() {
    int a,b,c;
    float x,y,d;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4.0*a*c;
    if (d>0) {
        x=(-b+sqrt(d))/(2.0*a);
        y=(-b-sqrt(d))/(2.0*a);
        printf("Roots are real numbers..... Roots are: %.2f and %.2f\n",x,y);
    }
    else if (d==0) {
        x=-b/(2.0*a);
        printf("Roots are real and same : x = %.2f\n",x);
    }
    else {
        printf("Roots are imaginary\n");
    }
}
