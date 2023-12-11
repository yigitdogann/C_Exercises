#include <stdio.h>

int main(void){
    int n=0, x=0;
    scanf("%d", &n);//n statements
    char str[4];

    for (int i = 1; i <= n; i++){//i is loop checker
        scanf("%s", str);
        
        if(str[1] == '+'){
            x++;
        }else if(str[1]=='-'){
            x--;
        }
    }
    printf("%d", x);
    return 0;
}