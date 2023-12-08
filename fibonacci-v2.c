#include <stdio.h>

int main (void){//another fibonacci
    int num1 = 1, num2 = 1, num, hold, sum=0;
    scanf("%d", &num);
    for(int i = 1; num >= i; i++)
    {
        sum = sum + num1;
        printf("%d ", num1);
        hold = num1;
        num1 = num2;
        num2 = hold + num2;
    }
    printf("\n%d", sum);
    return 0;
}//1-1-2-3-5-8-13