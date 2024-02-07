#include <stdio.h>

int main(void){
    printf("---> JUST_A_LITTLE_REMINDER <---\n");
//i want to draw a casual tree to remember things.

    int lenght=0;
    printf("LENGHT OF TREE: ");
    scanf("%d", &lenght);
    
    for(int i=1; i<=lenght; i++){//i is current row.
        printf("\t");
        for(int j=0; j<lenght-i; j++){//j is blank counter.
            printf(" ");
        }
        for(int j=0; j<(2*i-1); j++){//j is star counter.
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}