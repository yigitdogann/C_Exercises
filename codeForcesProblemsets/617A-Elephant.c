#include <stdio.h>

int main(void){
    int x=0;
    scanf("%d", &x);//x is the distance
    int remain=0;
    remain = x%5;

    if((x%5)==0){
        printf("%d", x/5);
    }else{
        printf("%d", (x/5)+1);
    }
    return 0;
}