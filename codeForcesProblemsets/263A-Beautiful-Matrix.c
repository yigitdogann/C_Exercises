#include <stdio.h>

int main(void){
    int inputR=0;
    int x=0, y=0, c, r, a, b;

    for(c=1; c<=5; c++){//i is current column
        for (r=1; r<=5; r++){
            scanf("%d ", &inputR);
            if(inputR==1){
                x=c;
                y=r;
            }
        }
    }
    a=x-c;
    b=y-r;
    if((x-c)<0){
        a=c-x;
    }if((y-r)<0){
        b=r-y;
    }
    printf("%d", a+b);
    return 0;
}