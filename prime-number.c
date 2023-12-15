#include <stdio.h>

int main(void){//prime numbwer
    int num=0, div=0;
    printf("get num: ");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++){
        if((num%i)==0){
            div++;
        }
    }
    
    if(!(num==1)&&div==2){
        printf("its a prime number");
    }else{
        printf("its not a prime number");
    }
    return 0;
}