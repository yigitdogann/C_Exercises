#include <stdio.h>

int check(int num);

int main(void){
    int num=0;
    printf("get: ");
    scanf("%d", &num);
    
    printf("%d", check(num));
    
    return 0;
}

int check(int num){
    int i=1, bin=0;
    while(num>0){
        bin=bin+(num%2*i);
        num/=2;
        i*=10;
    }
    return bin;
}