#include <stdio.h>
#include <math.h>

int armstrongCheck(int num);
int palindromeCheck(int num);
int numberOfDigits(int num);

int main(void){
    int number=0;
    printf("Enter your number to calculate: ");
    scanf("%d", &number);
    
    if(armstrongCheck(number)&&palindromeCheck(number)){
        printf("%d is both armstrong and palindrome.", number);
    }else if(armstrongCheck(number)==1){
        printf("%d is only armstrong.", number);
    }else if(palindromeCheck(number)==1){
        printf("%d is only palindrome.", number);
    }else{
        printf("%d is not a special number.", number);
    }
    
    return 0;
}

int armstrongCheck(int num){
    int sum=0;
    int hold=num;
    int digits= numberOfDigits(num);
    while(num>0){
        sum=pow(num%10, digits)+sum;
        num=num/10;
    }
    //printf("%d", sum);
    if(hold==sum){
        return 1;
    }else{
        return 0;
    }
}

int numberOfDigits(int num){
    int digits=0;
    while(num>0){
        num=num/10;
        digits++;
    }
    //printf("%d", digits);
    return digits;
}

int palindromeCheck(int num){
    int sum=0;
    int hold=num;
    while(num>0){
        sum=sum*10+num%10;
        num=num/10;
    }
    //printf("%d", sum);
    if(sum==hold){
        return 1;
    }else{
        return 0;
    }
}