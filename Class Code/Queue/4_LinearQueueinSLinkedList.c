#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int flag = 0;
typedef struct queue {
	
	int data;
	struct queue *next;
}queue;

queue *front = NULL;
queue *rear = NULL;

void enQueue() {
	
	queue *newNode = (queue*)malloc(sizeof(queue));

	printf("\nEnter a Data in Queue : ");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	if(front == NULL && rear == NULL) {
		
		front = newNode;
	} else {

		rear->next = newNode;
	}
	rear = newNode;
}

bool isEmpty() {
	
	if(front == NULL && rear == NULL) {
		
		return true;
	} else {
		
		return false;
	}
}
int deQueue() {
	
	if(isEmpty()) {
		
		flag = 0;
		return -1;
	} else {
		
		flag = 1;
		int data = front->data;
		queue *temp = front;

		if(front == rear) {
			
			front = NULL;
			rear = NULL;
		} else {
			
			front = front->next;
		}
		free(temp);
		temp = NULL;
		return data;
	}	
}

int frontElement() {
	
	if(isEmpty()) {
		
		flag = 0;
		return -1;
	} else {
		
		flag = 1;
		return front->data;
	}
}

void printQueue() {
	
	if(isEmpty()) {
		
		printf("Queue is Empty\n");
	} else {
		
		queue *temp = front;
		while(temp->next != NULL) {
			
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}
void main() {

	int ret;
	char ch;
	do {
	
		int choice;
		printf("\n1.EnQueue\n2.DeQueue\n3.Front Element\n4.isEmpty\n5.Print Queue\n");
		
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);

		switch(choice) {
			
			case 1 :
				enQueue();
				break;

			case 2 :
				ret = deQueue();
				if(flag == 0 && ret == -1) {
					
					printf("Queue is Empty\n");		
				} else {
					
					printf("%d is DeQueue\n",ret);
				}
				break;

			case 3 :
				ret = frontElement();
				if(flag == 0 && ret == -1) {
					
					printf("Queue is Empty\n");
				} else {
					
					printf("Front ELement : %d\n",ret);
				}
				break;

			case 4 :
				bool val = isEmpty();
				if(val) {
					
					printf("Queue is Empty\n");	
				} else {
					
					printf("Queue is Not Empty\n");
				}
				break;

			case 5 : 
				printQueue();
				break;

			default :
				printf("Wrong Choice\n");
		}
		
		getchar();
		printf("\nDo want to continue?");
		scanf("%c",&ch);
	} while(ch == 'y' || ch == 'Y');
}
