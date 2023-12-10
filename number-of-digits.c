#include <stdio.h>

int main (void){
    printf("---NUMBER OF DIGITS OF A NUMBER---\n");
    
    int n=0;
    printf("Put the number: ");
    scanf("%d", &n);
    
    int d=0;
    while(n>0){
            n=n/10;
            d++;
    }
    
    printf("%d", d);
    return 0;
}