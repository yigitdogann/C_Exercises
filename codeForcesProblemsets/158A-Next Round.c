#include <stdio.h>

int main() {
	int n, k, counter=0;
	scanf("%d %d", &n, &k);

	int contestants[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &contestants[i]);
	}

	for(int i = 0; i < n; i++) {
		if(contestants[i]!=0 && contestants[i] >= contestants[k-1])
			counter++;
	}

	printf("%d", counter);
	return 0;
}
