#include <stdio.h>
//WRITING AND CREATING A FILE
	int main(void) {

	FILE* fPtr = fopen("test_file.txt", "w");

	fprintf(fPtr, "1234");
	fprintf(fPtr, "this is a sentence");
	fprintf(fPtr, "\n");
	fclose(fPtr);

	return 0;
	}



/*
until now, we used to store our datas in the memory, hence the program gets the data so fast.
but from now on, we be able to hold our datas in a file in our hard drive.
so thats why, our datas will no longer be get lost when we terminate the program.(non-volatile)

while doing this, we will be working on pointers which have the type of FILE.	"FILE *fPtr"
fopen(), fclose(), r-read, w-write, a-append, remove()-this returns 0 if deleted successfully
*/