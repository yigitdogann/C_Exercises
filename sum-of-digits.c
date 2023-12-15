#include <stdio.h>

int main (void){
    int num=0, sum=1, i=1;
    printf("Get number: ");
    scanf("%d", &num);
    
    while(num>9){
        sum=(num%10)+sum;
        num=num/10;
        i++;
    }
    printf("\tNumber of digits: %d\n\tSum of digits: %d", i, sum);
    return 0;
}