#include <stdio.h>

int main(void){
    int n=0, res=0;
    scanf("%d", &n);
    int p=0, v=0, t=0;

    for (int i = 1; i <= n; i++){
        scanf("%d %d %d", &p, &v, &t);
        
        if((p+v+t)>=2){
            res=res+1;
        }else{}
        
    }
    printf("%d", res);
    return 0;
}