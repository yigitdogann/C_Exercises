#include <stdio.h>

int main() {
	int k, n, w; //price-wallet-amount
	scanf("%d %d %d", &k, &n, &w);
	
	int total=0, counter=1;
    for(int i=0; i<w; i++){
        total+=k*counter;
        counter++;
    }
    
    if(n>=total){
        printf("0");
    }else{
        printf("%d", total-n);
    }
    
	return 0;
}
