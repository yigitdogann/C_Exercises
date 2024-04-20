#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* nextNode;
}node;

void addBegin(node* *head, int x);
void printList(node* head);

int main(void) {
	node* head=NULL;

	addBegin(&head, 1);
	addBegin(&head, 2);
	addBegin(&head, 3);

	printList(head);
	return 0;
}

void addBegin(node** head, int x) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->nextNode = *head;

	*head = newNode;
}

void printList(node *head) {
	node* currentNode = NULL;
	currentNode = head;

	for (; currentNode != NULL;) {
		printf("%d\n", currentNode->data);
		currentNode = currentNode->nextNode;
	}
}

void addLast(node** head, int x) {

}