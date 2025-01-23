#include <stdio.h>
#define N 100
int q[N];
int front = 0, last = 0, count = 0;

void enqueue(int x){
	if (count >= N) {
		printf("full");
		return;
	}
	else {
		q[last] = x;
		last = (last + 1) % N;
		count++;
		return;
	}
}

void dequeue() {
	if (count == 0) {
		printf("empty");
		return;
	}
	else {
		count--;
		printf("%d", q[front]);
		front = (front + 1) % N;
		return;
	}
}

int main(void) {
	

	return 0;
}