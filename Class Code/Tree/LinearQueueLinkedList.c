#include<stdio.h>
#include<stdlib.h>

typedef struct Queue {
	
	int data;
	struct Queue *next;
}Queue;

Queue *front  = NULL;
Queue *rear = NULL;

void enQueue() {
	
	Queue *newNode = (Queue*)malloc(sizeof(Queue));

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	if(front == NULL) {
		front == newNode;
		rear = newNode;
	} else {
		
		rear->next = newNode;
		rear = newNode;
	}
}
int deQueue() {
	
	if(front == NULL) {
		
		printf("Queue is Underflow\n");
	} else if(front == rear) {

		int data = front->data;
		free(front);
		front = NULL;
		rear = NULL;

		return data;
	} else {
		
		int data = front->data;

		Queue *temp = front;
		front = front->next;
		free(temp);

		return data;
	}
}
int frontElement() {

	if(front == NULL) {

		printf("Queue is UnderFlow\n");
	} else {
		
		return front->data;
	}
}
void main() {
	
	char ch;
	do {
		
		int choice;
		printf("1.enQueue\n2.deQueue\n3.FrontElement\n");
		printf("Enter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				enQueue();
				break;
			case 2 :
				int ret1 = deQueue();
				printf("%d is Dequeud.\n",ret1);
				break;
			case 3 :
				int ret2 = frontElement();
				printf("%d is Front Element.\n",ret1);
				break;
		}
		getchar();
		printf("Do you want continue?");
		scanf("%c",&ch);
	} while(ch == 'Y' || ch == 'y');
}
