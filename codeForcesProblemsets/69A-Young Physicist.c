#include <stdio.h>

int main(){
    int n, sumX=0, sumY=0, sumZ=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        sumX+=x; sumY+=y; sumZ+=z;
    }
    
    if(sumZ==0 && sumY==0 && sumX==0)
        printf("YES");
    else
        printf("NO");
        
    return 0;
}
