#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* nextPtr;
}node;
node* head;

int instructions(void);
void addElement(int x);
void deleteElement();
void printList();

int main(void) {
	
	int choice = instructions(), x = 0;

	while (choice != 3) {
		
		switch (choice) {
		case 1:
			printf("get data: ");
			scanf("%d", &x);
			addElement(x);
			break;
		case 2:
			deleteElement();
			break;
		case 3:
			
			break;
		default:
			break;
		}
		choice = instructions();

		
	}
	printList();

	return 0;
}

int instructions(void) {
	int choice = 0;

	printf("choice:\n"
		"1 to insert to the list\n"
		"2 to delete from list\n"
		"3 to end\n");
	scanf("%d", &choice);

	return choice;
}

void addElement(int x) {
	node* temp = malloc(sizeof(node));

	if (temp == NULL) {
		// Handle memory allocation failure
		return;
	}

	temp->data = x;

	if (head == NULL) {
		temp->nextPtr = NULL;
		head = temp;
	}
	else {
		temp->nextPtr = head;
		head = temp;
	}
}

/*delete first data*/
void deleteElement() {
	node* forget=NULL;/*gonna free this memory*/
	if (head == NULL) {
		printf("EMPTY LIST!");
	}
	else {
		forget = head;
		head = head->nextPtr;
		free(forget);
	}
}

void printList() {
	node* visitor = NULL;
	visitor = head;

	while (visitor != NULL) {
		printf("%d - ", visitor->data);
		visitor = visitor->nextPtr;
	}
}

//if (head == NULL) {
//	printf("EMPTY LIST!");
//}
//else {
//	forget = head;
//	while (forget->data != x) {
//		forget = forget->nextPtr;
//
//	}/*forget is first*/
//	head = head->nextPtr;
//	free(forget);
//
//}