#include <stdio.h>

int main (void){
    printf("---COMMON DIVISORS OF 2---\n");
    
    int num1=0;
    printf("Please enter your first number: ");
    scanf("%d", &num1);
    
    int num2=0;
    printf("Please enter your second number: ");
    scanf("%d", &num2);
    
    printf("Common divisors are: ");
    for(int i=1; i<=num1 || i<=num2; i++){
        
        if(num1%i==0 && num2%i==0){
        printf("%d ", i);
        }
        
    }
    
    return 0;
}