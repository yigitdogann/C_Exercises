#include <stdio.h>
#define N 100

int q[N];
int front = 0, last = 0, count = 0;

void enqueue(int item) {
	if (count >= N) {
		printf("full");
		return -1;
	}
	else {
		q[last] = item;
		last = (last + 1) % N;
		count++;
		return 0;
	}
}

void dequeue() {
	int item;
	if (count == 0) {
		printf("empty");
		return 0;
	}
	else {
		item = q[front];
		front = (front + 1) % N;
		count--;
		return item;
	}
}

int main(void) {
	

	return 0;
}