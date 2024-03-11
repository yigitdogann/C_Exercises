#include <stdio.h>

int main(void) {
	int arr[] = { 1,2,3,4,5 };

	int* arrPtr = &arr[4];
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *arrPtr--);
	}

	return 0;
}








/////////////////////////////////////////////////

/*
int main(void) {

	int arr[] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("address: %p   value: %d\n", &arr[i], arr[i]);
	}//size of type 'int' is 4 byte, hence we saw that addresses go 4 by 4.

	int proof=0;
	printf("byte size of type 'int' is: %d\n\n", sizeof(proof));

	printf("1st element's address: %p\n", &arr[0]);
	printf("array's address: %p\n\n", arr);//1st element's address is same as the address of the array's address.

	/*for (int i = 0; i < 5; i++) {
		printf("%d. element of the array is %d\n", i+1, (*arr + i));
	}
	printf("\n");*//*
	for (int i = 0; i < 5; i++) {
		printf("%d. element of the array is %d\n", i + 1, *(arr + i));
	}*/

	/*
	for (int i = 1; i <= 5; i++) {
		printf("%d. element of the array is %d\n", i, *arr++);
	}*/
	/*
	printf("\n"); printf("\n");

	printf("4. element is: %d\n", *(arr+3));
	*(arr + 3) = 40;
	printf("4. element is: %d", *(arr + 3));*/
/*with adding any integer to an address is like, you add 2 to an address. this does 2 times sizeof
the array's type. if its an integer, then +2 means +(2*4). cuz' the logic works with this method.*/

/*
	return 0;
}*/

/////////////////////////////////////////////////

/*
void divide2(int* num);

int main(void) {
	printf("\t--POINTERS--\n");
	
	int num = 10;
	divide2(&num);
	printf("half of the 10 is: %d", num);
	
	return 0;
}

void divide2(int* numptr) {
	*numptr = *numptr / 2;
}*/

/////////////////////////////////////////////////

/*
void cubeFinder(int* numPtr);

int main(void) {
	printf("\t--POINTERS--\n");

	int num = 5;
	cubeFinder(&num);
	printf("cube of 5 is: %d", num);

	return 0;
}

void cubeFinder(int* numPtr) {
	*numPtr = *numPtr * *numPtr * *numPtr;
}*/