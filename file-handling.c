/*good to remember:
stdin: standart input - keyboard.
stdout: standart output - screen.

r: for only reading.
w: create file for writing, if exist delete all data and write over it.
a: open or create file for writing, append to the BOTTOM of the file.

r+: open existing file for update, reading and writing.
w+: create file for reading and writing, if exist, delete data and write over .
a+: open or create file for reading and writing, updates will be added to the END.

End-Of-File(EOF) key:
	for windows: ctrl+z enter
	for other OS: ctrl+d
*/
#include <stdio.h>

FILE* fPtr=NULL;
int main(void) {
	/*create or open existing file*/
	fPtr = fopen("my_new_file.txt", "w");


	fputs("1st string - fputs\n", fPtr);
	/*puts doesnt apply new line to the string. put manually*/
	
	fputc('a', fPtr);
	fputc('b', fPtr);
	fputc('c', fPtr);


	//char str[20];
	//fgets(str, 20, stdin);
	int num = 111;
	fprintf(fPtr, "\n%d - fprintf\n", num);

	fclose(fPtr);
	/*close the file*/


	/*create existing file, add to end*/
	fPtr = fopen("my_new_file.txt", "a");
	
	fputs("add this to the end", fPtr);
	int data[10];
	for (int i = 0; i < 5; i++) {
		printf("get data: ");
		scanf("%d", &data[i]);
	}
	fputs("\n", fPtr);
	for (int i = 0; i < 5; i++) {
		fprintf(fPtr, "%d ", *(data + i));
	}

	fclose(fPtr);
	/*close the file*/
	return 0;
}