#include <stdio.h>

int main (void){
    printf("---LEAST COMMON MULTIPLE---\n");
    
    printf("Please enter your first number: ");
    int num1=0;
    scanf("%d", &num1);
    
    printf("Please enter your second number: ");
    int num2=0;
    scanf("%d", &num2);
    
    int max=0;
    int lcm=0;
    max=(num1>num2)?num1:num2;
    
    while(lcm<max){
        
        if(max%num1==0 && max%num2==0){
            lcm=max;
            break;
        }
        
        max++;
    }
    
    printf("%d", lcm);
    return 0;
}