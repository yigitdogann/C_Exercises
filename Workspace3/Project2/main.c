#include <stdio.h>

int main (void){
    printf("---FACTORIAL---\n");
    
    printf("Factorial Until: ");
    
    int until = 0;
    scanf("%d", &until);
    
    int result = 1;
    for(int i=1 ; i<=until ; i++){
        result = i*result;
    }
    
    printf("%d", result);
    return 0;
}