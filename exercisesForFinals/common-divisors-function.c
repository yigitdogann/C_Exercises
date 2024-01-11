#include <stdio.h>

int divisor(int num1, int num2);

int main(void){
    printf("--COMMON_DIVISORS--\n");
    
    int num1=0, num2=0;
    printf("NUM1: "); scanf("%d", &num1);
    printf("NUM2: "); scanf("%d", &num2);
    
    divisor(num1, num2);
    return 0;
}

int divisor(int num1, int num2){
    int min=0;
    min=(num1<num2)?num1:num2;
    
    printf("Numbers are: ");
    for(int i=1; i<=min; i++){
        if(min%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}