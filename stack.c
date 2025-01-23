#include <stdio.h>
#define N 100
int q[N];
int sp=0;

void push(int x) {
	if (sp >= N) {
		printf("full");
		return -1;
	}
	else {
		q[sp] = x;
		sp++;
		return 0;
	}
}

void pop() {
	if (sp == 0) {
		printf("empty");
		return -1;
	}
	else {
		sp--;
	}
}

int main(void) {
	

	return 0;
}