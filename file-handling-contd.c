/*good to remember:

travel in the file with the help of fseek function.
	fseek(fptr, offset, position);
		fptr is a file pointer.
		offset is number of bytes distance from "position".
		position is the reference position for traveling.
			while using this position section, we can use:
				SEEK_END -> from the end.
				SEEK_SET -> from the beginning.
				SEEK_CUR -> from the current position.

read data from the file:
	fread(mptr, size, number, fptr);
		mptr is the memory address of the datas.
		number, is the number of datas to read.
		size is the size of each data.
		fptr is the file pointer that shows us our file.

write data to the file:
	fwrite(mptr, size, number, fptr);
		mptr is the address of the memory which is gonna be filled.
		size is the size of each data thats gonna be written.
		number is the number of datas gonna be added.
		fptr is the file pointer that shows us our file.

	ftell(fptr);: says that where we are at the file currently.

	rewind(fptr);: function re-arranges the pointer to the beginning.

out of topic info: 'traverse' means checking every element.
		
*/

#include <stdio.h>
FILE* fPtr = NULL;

int main(void) {
	char sentence[15];
	char read[15];

	/*write sentence section*/
	fPtr = fopen("demo.txt", "w");

	printf("what's the sentence?\n");
	fgets(sentence, 15, stdin);//fgets used for to avoid scanf errors

	fputs(sentence, fPtr);/*fputs puts a new line in file*/

	fclose(fPtr);

	/*read sentence section*/
	fPtr = fopen("demo.txt", "r");

	fgets(read, 15, fPtr);
	printf("\nin file: %s", read);

	printf("the location in the file is: %ld", ftell(fPtr));/*ftell says the current position*/

	fclose(fPtr);


	return 0;
}

/*
fPtr = fopen("file2.txt", "r");

//fscanf(fPtr, "%s", sentence); //from file, in this format, to this buffer. FSCANF READS UNTIL SPACE!!
fgets(sentence, 15, fPtr);
printf("the sentence is: %s\n", sentence);
printf("the location in the file is: %ld\n", ftell(fPtr));

fclose(fPtr);
*/