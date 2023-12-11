#include <stdio.h>

int main(void){
    int x=0, y=0, i=0, move=0;

    for(int c=1; c<=5; c++){//c is current column
        for(int r=1; r<=5; r++){
            scanf("%d ", &i);
            
            if(i==1){//i is input
                if(c<3){
                    move=(3-c);
                }else{
                    move=(c-3);
                }

                if(r<3){
                    move=move+(3-r);
                }else{
                    move=move+(r-3);
                }
            }
        }
    }
    printf("%d", move);
    return 0;
}