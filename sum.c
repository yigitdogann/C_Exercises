#include <stdio.h>

//sum operation
int main(void){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("Enter your first integer:");
    scanf("%d", &num1);
    printf("Enter your second integer:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum is %d\n", sum);
    return 0;
}