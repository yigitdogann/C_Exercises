#include <stdio.h>

//READING FROM A FILE
int main(void) {
	FILE* fPtr = fopen("test_file2.txt", "r");
	char myString[50];


	if (fPtr == NULL) {

		printf("ERROR WHILE OPENING THE FILE!");
		return 1;

	}//check if the file exist or can open without errors


	while (fgets(myString, 50, fPtr)!=NULL) {

		printf("%s", myString);
		
	}//get string from file until the end. if its the end fgets will equal null.


	char ch;
	int lineNumber = 0;
	while ((ch = fgetc(fPtr)) != EOF) {
		if (ch == '\n') {
			lineNumber++;
		}
	}
	printf("%d", lineNumber);
	
	fclose(fPtr);
	return 0;
}