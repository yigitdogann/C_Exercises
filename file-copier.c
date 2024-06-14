#include <stdio.h>

int main(void) {

	FILE* src = NULL;
	FILE* aim = NULL;
	char c;

	if ((src = fopen("..GitHub/C_Exercises/link-list.c", "r")) == NULL) {
		printf("error at fopen 1");
		return 1;
	}
	else {
		if ((aim = fopen("copied_code.c", "w")) != NULL) {
			while ((c = fgetc(src)) != EOF) {
				fputc(c, aim);
			}
		}
		fclose(src);
		fclose(aim);
	}

	return 0;
}