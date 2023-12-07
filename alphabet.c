#include <stdio.h>

int main (void){
    printf("---ALPHABET---\n");
    
    for(int j=97; j<=122; j++){
        printf("%c", j);
        printf("%c ", j-32);
    }
    return 0;
}