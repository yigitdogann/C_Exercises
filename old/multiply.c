#include <stdio.h>

int main (void){
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    printf("put your first number: ");
    scanf("%d", &num1);
    printf("put your second number: ");
    scanf("%d", &num2);
    result = num1 * num2;
    printf("your result is: %d", result);
    return 0;
}