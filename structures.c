#include <stdio.h>

typedef struct card {
	const char* face;
	const char* suit;
}card;
card myCard = {0};//we dont need to make 0. cuz we defined outside, its already 0.
card deck[52];
card *cardPtr;

int main(void) {
	card myCard = { "three", "hearts" };
	printf("%s ", myCard.suit);

	for (int i = 0; i < 52; i++) {
		(&deck[i])->face = "three";//its not dereferenced, still can use as pointer
		printf("%s\n", deck[i].face);//when u put braces, it's dereferenced
	}


	return 0;
}