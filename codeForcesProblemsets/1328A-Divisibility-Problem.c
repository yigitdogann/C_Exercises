#include <stdio.h>
 
int main(void){
    int t=0, a=0, b=0, k = 0;
    scanf("%d", &t);
 
    for (int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", (b - a % b) % b);
    }
    return 0;
}