#include <stdio.h>

int main(void){
    int size=0;
    printf("Tree size of: ");
    scanf("%d", &size);
    
    for(int i=1; i<=size; i++){
        int c= 65;
        for(int j=0; j<size-i; j++){
            printf(" ");
        }
        for(int j=0; j<(i*2)-1; j++){
            printf("%c", c);
            c++;
        }
        printf("\n");
        
    }
    
    return 0;
}