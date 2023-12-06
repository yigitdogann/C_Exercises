#include <stdio.h>

int main (void){
    printf("---MULTIPLYING--- \n");
    
    printf("First Number: ");
    int num1 = 0;
    scanf("%d", &num1);
    
    printf("Second Number: ");
    int num2 = 0;
    scanf("%d", &num2);
    
    int result = num1 * num2;
    
    printf("Result is: %d", result);
    
    return 0;
}