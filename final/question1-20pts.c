/*
all of these line of codes are belong to me and i'm writing
through my mind. like what i remember about question and answer.
current time, one day after exam, 16/01/2024 - 10:28am
*/

#include <stdio.h>
//PRINT THE SUM OF THE DIGITS OF A NUMBER.
int main (void){
    printf("get num: ");
    int num=0, sum=0;
    scanf("%d", &num);
    
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("%d is the sum of the digits", sum);
    return 0;
}