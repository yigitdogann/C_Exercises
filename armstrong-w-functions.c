#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
int digitNumber(int num);

int main(void){
    printf("--ARMSTRONG_DESTROYER--\n");
    
    int num=0;
    printf("What's your number: ");
    scanf("%d", &num);
    
    if(num==isArmstrong(num)){
        printf("IT'S ARMSTRONG");
    }else{
        printf("IT'S NOT AN ARMSTRONG");
    }
    return 0;
}

///////DIGIT FOUNDER FOR POWER
int digitNumber(int num){
    int digit=0;
    while(num>0){
        num=num/10;
        digit++;
    }
    //printf("%d\n", digit);******check point******
    return digit;
}

//////ARMSTRONG CALCULATOR WITH POWER OF DIGIT
int isArmstrong(int num){
    int digit=digitNumber(num);
    int sum=0, last=0;
    
    while(num>0){
        last= num%10;
        //printf("%d\n", last);******check point******
        sum= sum+pow(last, digit);
        num= num/10;
    }
    return sum;
}//153