#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *nextPtr;
}node;

void start(int getData);

int main(void) {
	int getData=0;
	printf("get data: ");
	scanf("%d", &getData);
	start(getData);
	return 0;
}

void start(int getData) {
	node* head = NULL;
	node* temp = NULL;
	temp = malloc(sizeof(node));

	if (temp!= NULL) {//check if theres no error while allocating
		(*temp).data = getData;
		temp->nextPtr= NULL;
	}//temp is a temporarily pointer for creating a new node

	head = temp;//head connected to that node, which has the data 1

	printf("data in first node: %d\naddress for next is %p\n\n", head->data, head->nextPtr);
	
	/*create new node*/
	temp = malloc(sizeof(node));
	temp->data = 2;
	temp->nextPtr = NULL;

	/*create new temp pointer for going until the end*/
	node* temp1 = NULL;
	temp1 = head;
	while(temp1->nextPtr!=NULL) {//GO UNTIL LAST NODE 
		temp1 = temp1->nextPtr;
	}/*after loop, you'll have the last node's address*/
	temp1->nextPtr = temp;

	printf("%d, %d", head->data, (head->nextPtr)->data);
}
