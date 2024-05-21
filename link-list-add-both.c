#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* nextPtr;
}node;
node* head;
int x, place= 0;

void insert(int x);
void insertEnd(int x);
void printList();
void addToList();

int main(void) {
	int a = 0;
	head = NULL;
	printf("how many items do u gonna add?");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		addToList();
	}

	printList();
	return 0;
}

void insert(int x) {
	node* temp = malloc(sizeof(node));
	temp->data = x;
	temp->nextPtr = NULL;

	if (head != NULL) {
		temp->nextPtr = head;
	}

	head = temp;
}

void printList() {
	node* visitor = head;

	while (visitor != NULL) {
		printf("%d ", visitor->data);
		visitor = visitor->nextPtr;
	}
	puts("");
}

void insertEnd(int x) {
	node* visitor = head;

	if (head == NULL) {
		printf("list is empty!");
		return 1;
	}

	while (visitor->nextPtr != NULL) {
		visitor = visitor->nextPtr;
	}/*visitor points to last node*/

	node* temp = malloc(sizeof(node));
	temp->data = x;
	temp->nextPtr = NULL;/*temp points to new node*/

	visitor->nextPtr = temp;

}

void addToList() {
	printf("where do u wanna put the data?\n1) for beginning\n2) for end\n");
	scanf("%d", &place);

	printf("get number: ");
	scanf("%d", &x);
	switch (place) {
	case 1:
		insert(x);
		break;
	case 2:
		insertEnd(x);
		break;
	default:
		printf("invalid!");
		return 1;
	}
}