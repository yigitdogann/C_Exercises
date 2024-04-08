#include <stdio.h>
#define SIZE 50

void reverse(char* sPtr);

int main(void) {
	char string[SIZE];
	
	puts("enter your sentence:");
	fgets(string, SIZE, stdin);

	puts("");

	puts("sentence after printed backward:");
	reverse(string);
	
	return 0;
}

void reverse(char* sPtr) {
	if (sPtr[0] == '\0') {
		return;
	}else {
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}