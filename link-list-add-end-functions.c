#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* nextPtr;
}node;
node* head = NULL;
int num = 0;

node* createNode(int choice);
void insertEnd(node* new);
void printList(node* start);

int main(void) {
	printf("Enter your data to be saved: ");
	scanf("%d", &num);

	head = createNode(num);

	printf("Enter your second data to be saved: ");
	scanf("%d", &num);
	insertEnd(createNode(num));

	if (head != NULL) {
		printList(head);
	} else {
		printf("memory couldn't allocated");
		return 1;
	}
	
	return 0;
}

node* createNode(int choice) {
	node* temp = NULL;
	temp = malloc(sizeof(node));

	if (temp != NULL) {
		temp->data = choice;
		temp->nextPtr = NULL;
	}

	return temp;
}

void insertEnd(node* new) {
	/*visit every node until reaching the last node*/
	node* visitor = head;
	while (visitor->nextPtr!=NULL) {
		visitor = visitor->nextPtr;
	}/*after loop, visitor will be equal to last node's address*/
	
	visitor->nextPtr = new;
}

void printList(node* start) {
	node* currentPtr=start;
	if (currentPtr == NULL) {
		printf("empty list!");
	}
	else {
		while (currentPtr != NULL) {
			printf("%d %p\n", currentPtr->data, currentPtr);
			currentPtr = currentPtr->nextPtr;
		}
	}
}