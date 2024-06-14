#include <stdio.h>

typedef struct clientData {
	int accountNumber;
	char lastName[15];
	char firstName[15];
	double balance;
}clientData;

int main(void) {
	FILE* fPtr = NULL;

	if ((fPtr = fopen("accounts.dat", "wb")) == NULL) {
		printf("error at fopen 1");
		return 1;
	}
	else {
		clientData blankClient = { 0,"a","a",0.0 };
		fwrite(&blankClient, sizeof(clientData), 100, fPtr);
		fclose(fPtr);
	}
	
	if ((fPtr = fopen("accounts.dat", "rb")) == NULL) {
		printf("error at fopen 2");
		return 2;
	}
	else {
		clientData clientBuffer[100];
		fread(clientBuffer, sizeof(clientData), 100, fPtr);

		for (int i = 0; i < 100; i++) {
			printf("acc num: %d| name: %s %s| balance: %.2f\n",
				(clientBuffer[i].accountNumber), (clientBuffer[i].lastName),
				(clientBuffer[i].firstName), (clientBuffer[i].balance));
		}
		fclose(fPtr);
	}

	return 0;
}
/*idk what i've done also. but it seems so true isn't it.*/