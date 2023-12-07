#include <stdio.h>

int main(void){
    printf("---FIBONACCI---\n");
    
    int numbers = 0;
    printf("Show Fibonacci for numbers: ");
    scanf("%d", &numbers);
    
    int j = 1;
    int k = 0;
    int sum = 0;
    
    printf("1 ");
    for(int i = 2 ; i<=numbers ; i++){
        sum = j + k;
        k = j;
        j = sum;
        printf("%d ", sum);
    }
    
    return 0;
}
//1-1-2-3-5-8-13-21-34-55