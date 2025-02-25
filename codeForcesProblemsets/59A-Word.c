#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	static char s[101], sNew[101];
	fgets(s, 101, stdin); //get the text.
	s[strcspn(s, "\n")] = '\0'; //replace \n (came witg fgets) with \0

	int i = 0, lc = 0, uc = 0; //lc:lowercase, uc:uppercase.
	while(s[i]!='\0') {
		//check each char if it's in the range of uppercase letters.
		if(isupper(s[i]))
			uc++;
		if(islower(s[i]))
			lc++;

		i++;
	}


	if(uc>lc) {
		for(int j=0; s[j]!='\0'; j++) {
			sNew[j] = toupper(s[j]);
		}
	} else {
		for(int j=0; s[j]!='\0'; j++) {
			sNew[j] = tolower(s[j]);
		}
	}
	sNew[strlen(s)] = '\0';

	puts(sNew);

	/*
	//if uc is higher, then print one by one as uppercase.
	if(uc>lc) {
		for(int j=0; s[j]!='\0'; j++) {
			putchar(toupper(s[j]));
		}
	} else {
		for(int j=0; s[j]!='\0'; j++) {
			putchar(tolower(s[j]));
		}
	}
	*/

	//printf("%d, %d", uc, lc);

	return 0;
}