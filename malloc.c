#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char* str = NULL;
	str = (char*)malloc(25 * sizeof(char));

	if (str != NULL)
		printf("Memory created successfully\n");

	strcpy(str, "a sentence");

	//puts("enter your string below:");
	//fgets(str, 25, stdin);//always get input with fgets to avoid errors

	printf("the value at %p is: %s", str, str);

	free(str);
	return 0;
}