#include <stdio.h>

void evenChecker(int num);

int main (void){
    
    printf("enter 10 numbers to see which ones are even: \n");
    int nums[10];
    for(int i=0; i<10; i++){
        scanf("%d", &nums[i]);
    }
    
    printf("Even numbers are: ");
    for(int i=0; i<10; i++){
        evenChecker(nums[i]);
    }
    return 0;
}

void evenChecker(int num){
    if((num%2)==0){
        printf("%d ", num);
    }
    return;
}