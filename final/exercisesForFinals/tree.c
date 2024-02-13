#include <stdio.h>

int main(void){
    int size=0;
    printf("tree size of: ");
    scanf("%d", &size);
    
    for(int i=1; i<size; i++){//i is current
        for(int j=1; j<=size-i; j++){
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
/*
  *
 ***
*****
*/