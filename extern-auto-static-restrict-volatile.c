#include <stdio.h>

int y = 20;

void exampleFunction();
void exampleRestrict(int* a, int* b, int* restrict c);

int main(void) {
	//with this extern rule, y equals to 20.
	extern int y;

	//if theres no extern, then its equal to zero.
	int y;

	exampleFunction();

	return 0;
}

void exampleFunction() {
	/*if static being used; then, when we come this
	initialization stage, our data will be saved and 
	does not set our variable to zero ever again*/

	static int z = 0;
	printf("%d", z);
	z++;
	

	/*if auto used, it will act like normal "int z=0"*/

	auto int z = 0;
	printf("%d", z);
	z++;
}

void exampleRestrict(int* a, int* b, int *restrict c) {
	/*with the usage of restrict, we can optimize our
	c codes. it will remember the value and use on the
	following calls.*/

	*a += *c;
	
	/*my c value will be taken from memory one time. then
	my assembly code will remember it thanks to restrict
	and on the second calculation below, it will work faster*/

	*b = +*c;

	/*we have another thing called VOLATILE. this is the exact
	opposite of restrict. when we use volatile, on every call of
	the variable, it will go to its address and get its data*/
}