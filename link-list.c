#include <stdio.h>
#include <stdlib.h>

/* self-referential structure */
typedef struct listNode {
	char data; /* each listNode contains a character */
	struct listNode* nextPtr; /* pointer to next node*/
} ListNode_t;

void insert(ListNode_t** sPtr, char value);
char delete(ListNode_t** sPtr, char value);
int isEmpty(ListNode_t* sPtr);
void printList(ListNode_t* currentPtr);
void instructions(void);

int main(){
	ListNode_t* startPtr = NULL; /* initially there are no nodes */

	int choice = 0; /* user's choice */
	char item = 0; /* char entered by user */

	instructions(); /* display the menu */
	printf("? ");
	scanf("%d", &choice);

	/* loop while user does not choose 3 */
	while (choice != 3) {
		switch (choice) {

		case 1:
			printf("Enter a character: ");
			scanf("\n%c", &item);
			insert(&startPtr, item); /* insert item in list */
			printList(startPtr);
			break;

		case 2:
			/* if list is not empty */
			if (!isEmpty(startPtr)) {
				printf("Enter character to be deleted: ");
				scanf("\n%c", &item);

				/* if character is found, remove it */
				if (delete(&startPtr, item)) { /* remove item */
					printf("%c deleted.\n", item);
					printList(startPtr);
				}
				else {
					printf("%c not found.\n\n", item);
				}
			}
			else {
				printf("List is empty.\n\n");
			}
			break;

		default:
			printf("Invalid choice.\n\n");
			break;
		}

		instructions(); /* display the menu */
		printf("? ");
		scanf("%d", &choice);
	} /* end while */

	printf("End of run.\n");
	return 0; /* indicates successful termination */
}

/* display program instructions to user */
void instructions(void)
{
	printf("Enter your choice:\n"
		" 1 to insert an element into the list.\n"
		" 2 to delete an element from the list.\n"
		" 3 to end.\n");
}


/* Insert a new value into the list in sorted order */
void insert(ListNode_t** sPtr, char value)
{
	ListNode_t* newPtr = NULL; /* pointer to new node */
	ListNode_t* previousPtr = NULL; /* pointer to previous node in list */
	ListNode_t* currentPtr = NULL; /* pointer to current node in list */

	newPtr = malloc(sizeof(ListNode_t)); /* create node on heap */

	if (newPtr != NULL) { /* is space available */
		newPtr->data = value; /* place value in node */
		newPtr->nextPtr = NULL; /* node does not link to another node */
		previousPtr = NULL;
		currentPtr = *sPtr;

		/* loop to find the correct location in the list */
		while (currentPtr != NULL && value > currentPtr->data) {
			previousPtr = currentPtr; /* walk to ... */
			currentPtr = currentPtr->nextPtr; /* ... next node */
		}

		/* insert new node at beginning of list */
		if (previousPtr == NULL) {
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		}

		/* insert new node between previousPtr and currentPtr */
		else { 
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}
	}
	else {
		printf("%c not inserted. No memory available.\n", value);
	}
}


/* Delete a list element */
char delete(ListNode_t** sPtr, char value)
{
	ListNode_t* previousPtr = NULL; /* pointer to previous node in list */
	ListNode_t* currentPtr = NULL; /* pointer to current node in list */
	ListNode_t* tempPtr = NULL; /* temporary node pointer */

	/* delete first node */
	if (value == (*sPtr)->data) {
		tempPtr = *sPtr; /* hold onto node being removed */
		*sPtr = (*sPtr)->nextPtr; /* de-thread the node */
		free(tempPtr); /* free the de-threaded node */
		return value;
	}

	else {
		previousPtr = *sPtr;
		currentPtr = (*sPtr)->nextPtr;

		/* loop to find the correct location in the list */
		while (currentPtr != NULL && currentPtr->data != value) {
			previousPtr = currentPtr; /* walk to ... */
			currentPtr = currentPtr->nextPtr; /* ... next node */


			/* delete node at currentPtr */
			if (currentPtr != NULL) {
				tempPtr = currentPtr;
				previousPtr->nextPtr = currentPtr->nextPtr;
				free(tempPtr);
				return value;
			}
		}
		return '\0';
	}
}

/* Return 1 if the list is empty, 0 otherwise */
int isEmpty(ListNode_t* sPtr){
	return sPtr == NULL;
}

/* Print the list */
void printList(ListNode_t* currentPtr)
{
	/* if list is empty */
	if (currentPtr == NULL) {
		printf("List is empty.\n\n");
	}

	else {
		printf("The list is:\n");
		/* while not the end of the list */
		while (currentPtr != NULL) {
			printf("%c --> ", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}
//this code isn't belong to me. directly copied from lecture notes. thanks to our teacher.