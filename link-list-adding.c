#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* nextPtr;
}node;
node* head=NULL;

void insertFront(int x);
void insertEnd(int x);
void printList();

int main(void) {
	int choice=0, x= 0;

	while (choice != 3) {
		printf("where do you want to place your data?\n1)To the beginning\n2)To the end\n");
		scanf("%d", &choice);
		

		switch (choice) {
			case 1:
				puts("what is your data?");
				scanf("%d", &x);
				insertFront(x);
				break;
			case 2:
				puts("what is your data?");
				scanf("%d", &x);
				insertEnd(x);
				break;
			default:
				printf("invalid choice! choose again");
				choice = 0;
				break;
		}
		puts("");
		printList();
		puts("");
	}
	return 0;
}

void insertFront(int x) {
	node* temp = malloc(sizeof(node));
	temp->data = x;
	temp->nextPtr = NULL;
	if (head != NULL) {
		temp->nextPtr = head;
	}
	head = temp;
}

void insertEnd(int x) {
	node* visitor= head;
	if (visitor != NULL) {

		while (visitor->nextPtr != NULL) {
			visitor = visitor->nextPtr;
		}/*last node's address is visitor*/
	
		node* temp = NULL;
		temp = malloc(sizeof(node));
		temp->data = x;
		temp->nextPtr = NULL;
		visitor->nextPtr = temp;
	}else{printf("empty list");}
	
	
}

void printList() {
	node* reader = head;

	while (reader != NULL) {
		printf("%d-->", reader->data);
		reader = reader->nextPtr;
	}

}
