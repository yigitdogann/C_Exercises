#include <stdio.h>
#include <stdlib.h>

int main (void){
    printf("---GUESS-THE-NUMBER---\n");
    
    int guess=0;
    int num = (rand()%(100+1-1)+1);
    printf("guess the number between 1-100: ");
    scanf("%d", &guess);
    while(!(num==guess)){
        if(guess>num){
            printf("go lower -> ");
        }else{
            printf("go higher -> ");
        }
        scanf("%d", &guess);
    }
    printf("%d is correct", guess);
    return 0;
}