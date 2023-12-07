#include <stdio.h>

int main (void){
    printf("---GREATEST COMMON DIVISOR OF 2---\n");
        
    int num1=0;
    printf("Please enter your first number: ");
    scanf("%d", &num1);
    
    int num2=0;
    printf("Please enter your second number: ");
    scanf("%d", &num2);
    
    int gcd=0;
    for(int i=1; i<=num1 || i<=num2; i++){
        
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d", gcd);
    return 0;
}