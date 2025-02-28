#include <stdio.h>
#include <string.h>

int main() {
	static char s[101];
	fgets(s, 101, stdin); //this will get string, but newline too.
	s[strcspn(s, "\n")] = '\0'; //replace newline char with null char.
    char word[] = "hello";
    
    
	int counter = 5, j = 0; //decrease counter on every match.
	for(int i=0; i<strlen(s); i++) {
	    
	    //compare two strings index by index.
	    if(s[i] == word[j]){
	        counter--;
	        j++;
	    }
	}

	if(counter == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}
