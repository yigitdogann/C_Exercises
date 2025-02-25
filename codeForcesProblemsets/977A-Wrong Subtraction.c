#include <stdio.h>

int main() {
	int n, k; //n will be substracted, k times
	scanf("%d %d", &n, &k);

	for(int i=0; i<k; i++) {
		if(n%10==0) {
			n/=10;
		}else{
		    n--;
		}
	}
	
	printf("%d", n);

	return 0;
}