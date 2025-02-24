#include <stdio.h>

int main() {
	int a, b, years=0;
	scanf("%d %d", &a, &b);

	if(a==b) {
		printf("1");
	} else {
		while(a<=b){
		    a*=3;
		    b*=2;
		    years++;
		}
		printf("%d", years);
	}
    
	return 0;
}
