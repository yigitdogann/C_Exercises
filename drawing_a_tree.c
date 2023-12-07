#include <stdio.h>

int main (void){
    printf("---DRAWING A TREE---\n");
    
    int rows = 0;
    printf("I want a tree with height of: ");
    scanf("%d", &rows);
    
    for(int j = 1; j<=rows; j++){//j is current row
    
        for(int i = 1; i<=(rows-j); i++){
            printf(" ");
        }
        
        for(int i = 1; i<=(2*j-1); i++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}