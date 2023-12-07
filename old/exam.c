#include <stdio.h>

int main (void){
    int grade = 0;
    printf("put your grade between 0-100: ");
    scanf("%d", &grade);
    if (grade>100 && grade<0)
    {
        printf("please re-write your grade correctly!");
    } else if (grade>=50) {
        printf("you've passed the exam.");
    } else {
        printf("you've failed the exam.");
    }
    return 0;
}