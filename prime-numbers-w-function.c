#include <stdio.h>

void primeFinder(int num);

int main (void){
    printf("Enter your number to see if its a prime numer or not.\n");
    printf("Enter here --> ");
    
    int num=0;
    scanf("%d", &num);
    primeFinder(num);
    return 0;
}

void primeFinder(int num){
    int check=0;
    for(int i=1; i<=num; i++){
        if((num%i)==0){
            check++;
        }
    }
    
    if(check==2){
        printf("%d is a prime number", num);
    }else{
        printf("%d isn't a prime number", num);
    }
}