#include <stdio.h>

int main (void){
    /*int scores[10];//array named scores has 10 variables.
    
    for(int i=0; i<=9; i++){
        printf("%d>", i);
        scanf("%d", &scores[i]);
    }
    printf("your array -> [ ");
    for(int i=0; i<=9; i++){
        printf("%d ", scores[i]);
    }
    printf("]");*/
    
    int points[5];//array called points has 5variables.
    for(int i=0; i<=4; i++){
        scanf("%d", &points[i]);
    }
    
    int atama[7]={0, 1, 2, 3, 4, 5, 6};//we can assign our variables with this method
//we dont have to assign every variable in an array.
//for ex. if we have an array with 50 variables and initialize just 3 variables, the rest
//of the variables will be arranged as 0.

    float ozelAtama[500]={[2]=9.0, [85]=36.8};//we initialized the 2nd and 85th variable.
//and others are initialized as 0.
    
    return 0;
}