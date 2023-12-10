#include <stdio.h>

int main(void){
    int n=0, res=0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        int p=0, v=0, t=0;
        scanf("%d %d %d", &p, &v, &t);
        if((p+v+t)>=2){
            res++; printf("%d", res);
        }
        
    }
    
    return 0;
}