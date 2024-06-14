#include <stdio.h>

typedef struct clientData {
	int accountNumber;
	char lastName[15];
	char firstName[15];
	double balance;
}clientData;

int main(void) {
	FILE* fPtr = NULL;//pointer variable to my ".dat" file.

	if ((fPtr = fopen("account.dat", "wb")) == NULL) {//my ".dat" file was opened on write-binary mode.
		printf("error fopen!");
	}
	else {
		clientData blankClient = { 0, " ", " ", 0.0 };
		for (int i = 0; i < 100; i++) {
			fwrite(&blankClient, sizeof(clientData), 1, fPtr);
			/*fwrite wrote our buffer's datas to the file 100 times.
			but we can also do it by writing 100 on third parameter, outside of the loop.*/
		}
		fclose(fPtr);
	}
	

	if ((fPtr = fopen("account.dat", "rb")) == NULL) {
		printf("error fopen2!");
	}
	else {
		
		for (int i = 0; i < 100; i++) {
			clientData readBuffer;
			fread(&readBuffer, sizeof(clientData), 1, fPtr);

			/*fread reads our datas from .dat file, 100 times. each time it prints to screen.
			we can also read 100 datas with arranging our 3rd parameter 100 instead of 1, but this time
			we have to have an array to store these datas. cuz we cannot print all of them at once.
			it will work like, read from file and save to array 100 times, INSTANTLY.*/

			printf("account num: %d| name(last-first): %s %s| balance: %f\n",
					readBuffer.accountNumber, readBuffer.lastName,
					readBuffer.firstName, readBuffer.balance);
		}
		fclose(fPtr);
	}

	return 0;
}