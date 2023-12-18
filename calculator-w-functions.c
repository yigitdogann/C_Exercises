#include <stdio.h>

int factorial(int num);

int main(void){
        printf("--FACTORIAL_WITH_FUNCTIONS--\n");
        printf("\tEnter a number for caclculation: ");
        int num1=0;
        scanf("%d", &num1);
        printf("= %d", factorial(num1));
}

int factorial(int num){
    int result=1;
    for(int i=1; i<=num; i++){
        printf("%d ", i);
        result=result*i;
    }
    return result;
}