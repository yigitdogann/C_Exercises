#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
	int salary;
	struct employee* next;
}employee;

employee* head;

void pop(void);
void push(int data);
void printer();

int main(void) {
	int choice = 1, data=0;

	puts("1 - for push\n2 - for pop\n0 - for exit");
	scanf("%d", &choice);

	while (choice != 0) {
		switch (choice){
			case 1:
				printf("salary: ");
				scanf("%d", &data);
				push(data);
				printer();
				break;
			case 2:
				pop();
				puts("popped!");
				printer();
				break;
			default:
				break;
		}
		puts("1 - for push\n2 - for pop\n0 - for exit");
		scanf("%d", &choice);
	}
	
	

	return 0;
}

void push(int data) {
	employee* temp = malloc(sizeof(employee));

	if (temp == NULL) {
		printf("memory cannot be allocated\n");
		return;
	}
	
	temp->salary = data;
	
	if (head == NULL) {//if list is empty
		temp->next = NULL;
		head = temp;
	}
	else {//if list isn't empty
		temp->next = head;
		head = temp;
	}
	
}


void pop(void) {
	employee* forget=head;
	
	if (forget == NULL) {
		printf("empty, cannot delete\n");
		return;
	}
	else {
		head = head->next;
		free(forget);
	}
}

void printer() {
	employee* visitor=head;
	if (visitor == NULL) {
		printf("empty list\n");
		return;
	}
	while (visitor != NULL) {
		printf("%d ->", visitor->salary);
		visitor = visitor->next;
	}
	printf("NULL\n");
}