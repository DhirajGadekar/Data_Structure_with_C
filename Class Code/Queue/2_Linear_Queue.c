/*<----------------------Linear Queue In Linked List----------------------->*/

#include<stdio.h>
#include<stdlib.h>

int size = 0,flag = 0;

typedef struct queue{

	int data;
	struct queue *next;
}queue;

queue *head = NULL;

queue* createNode(){

	queue *newNode = (queue*)malloc(sizeof(queue));

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	queue *next = NULL;

	return newNode;

}

int countNode(){

	queue *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
int enqueue(){

	int count = countNode();
	if(count == size){
		return -1;
	}else{
		queue *newNode = createNode();
		if(head == NULL){
			head = newNode;
		}else{
			queue *temp = head;

			while(temp->next != NULL){
			
				temp = temp->next;
			}
			temp->next = newNode;
		}
		return 0;
	}
}

int dequeue(){

        if(head == NULL){

                flag = 0;
                return -1;

        }else{
		flag = 1;
		int val = head->data;
                if(head->next == NULL){

			free(head);
			head = NULL;
		}else{

			queue *temp = head;
			head = head->next;
			free(temp);
		}
		return val;
        }

}

int front(){

        if(head == NULL){
                flag = 0;
                return -1;
        }else{
                flag = 1;
                return head->data;
        }

}

int printQueue(){

        if(head == NULL){

		return -1;
	}else{
		queue *temp = head;

		while(temp->next != NULL){
			
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}

void main(){

        printf("Enter the Size of Queue : ");
        scanf("%d",&size);
        int arr[size];
        char choice;
        do{
                int num;
                printf("\n1.Enqueue\n2.Dequeue\n3.Front\n4.PrintQueue\n");
                printf("Enter your choice : ");
                scanf("%d",&num);

                switch(num){
                        case 1:
                                {
                                        int ret = enqueue();
                                        if(ret == -1){
                                                printf("Queue OverFlow.\n");
                                        }
                                }
                                break;
                        case 2:
                                {
                                        int ret = dequeue();
                                        if(flag == 0){

                                                printf("Queue is UnderFlow\n");
                                        }else{

                                                printf("%d is Dequeued\n",ret);
                                        }
                                }
                                break;
                        case 3:
                                {
                                        int ret = front();
                                        if(flag == 0){
                                                printf("Queue is UnderFlow !!!\n");
                                        }else{
                                                printf("Front = %d\n",ret);
                                        }
                                }
                                break;
                        case 4:
                                {
                                        int ret = printQueue(arr);
                                        if(ret == -1){
                                                printf("Queue is UnderFlow\n");
                                        }
                                }
                                break;
                        default :
                                printf("Wrong Choice !!!\n");


                }

        getchar();
        printf("If you want to continue then type [Y|y] else type [N|n] : ");
        scanf("%c",&choice);
        }while(choice == 'Y' || choice == 'y');
}
