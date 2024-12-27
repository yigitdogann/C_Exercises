/*
* This project work fine but open to new updates.
* it's better to fix key control, but i don't want to.
* anyone anywhere can use this code file for anything.
* 27 December 2024 - 5.22pm best wishes..
*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

void firstDecide(char *choosing);
void nextDecide(char *choosing);
int diceRoller();
void game();
void instructions();
int p1, p2;

int main(void) {
	srand(time(NULL));
	char decide;

	instructions();
	printf("\t\t\t\tWELCOME TO THE BARBUT\n");
	firstDecide(&decide);

	int clear = 0;
	while (decide == 'Y' || decide == 'y') {
		
		game();
		clear++; puts("");

		if (clear == 2) {
			Sleep(2000);
			system("cls");
			clear = 0;
			printf("\t\t\t\tGOOD LUCK MY MATE!\n");
		}

		nextDecide(&decide);
	}

	return 0;
}

void game() {

	printf("Dices are rolling!\n");
	Sleep(1000);

	int dice1 = diceRoller(), dice2 = diceRoller();
	int sum1 = dice1 + dice2;
	printf("\tOpponent's dices: ");
	printf(" %d + %d = %d\n", dice1, dice2, (dice1+dice2));


	int dice3 = diceRoller(), dice4 = diceRoller();
	int sum2 = dice3 + dice4;
	printf("\tYour dices: ");
	printf("%d + %d = %d\n", dice3, dice4, sum2);


	switch (sum1) {
	case 7:printf("OPPONENT WON  "); p1++; break;
	case 11:printf("OPPONENT WON  "); p1++; break;
	case 2:printf("OPPONENT WON  "); p1++; break;
	case 3:printf("OPPONENT LOST  "); p2++; break;
	case 12:printf("OPPONENT LOST  "); p2++; break;
	default: break;
	}

	switch (sum2) {
	case 7:printf("YOU WON  "); p2++; break;
	case 11:printf("YOU WON  "); p2++; break;
	case 2:printf("YOU WON  "); p2++; break;
	case 3:printf("YOU LOST  "); p1++; break;
	case 12:printf("YOU LOST  "); p1++; break;
	default: break;
	}
	puts("");

	printf("STATS: Opponent-%d  You-%d\n", p1, p2);
}

int diceRoller() {
	int dice = rand() % 6 + 1;
	return dice;
}

void firstDecide(char *choosing) {
	printf("Do you want to play barbut?(Y/N)\n----> ");
	char input[10];
	fgets(input, sizeof(input), stdin);
	*choosing = input[0];
	puts("");
}
void nextDecide(char* choosing) {
	printf("Do you want to continue playing?(Y/N)\n----> ");
	char input[10];
	fgets(input, sizeof(input), stdin);
	*choosing = input[0];
	puts("");
}

void instructions() {
	printf("\t\t\t\tINSTRUCTIONS OF THE GAME\n");
	printf("Barbut is a variation game of Craps and it has been played in middle eastern for centuries.\n");
	printf("There are just a few basic rules for this game!\nIf you want to win, you have to roll 7 or 11.\nBut have to avoid rolling 2, 3 or 12.\n");
	printf("\nTo start playing, please hit ENTER.");
	getchar();
	system("cls");
}

//I've never played Barbut in my life btw.