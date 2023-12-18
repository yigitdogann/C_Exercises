#include <stdio.h>
#include <math.h>

void squareRoot(double number);

int main (void){
    printf("---SQUARE_ROOT_FINDER---\n");
    printf("\t\nEnter your number to see its square root: ");
    double n1=0;
    scanf("%lf", &n1);
    squareRoot(n1);
    return 0;
}

void squareRoot(double number){
    printf("%.2lf", sqrt(number));
}