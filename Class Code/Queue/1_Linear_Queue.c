/*<----------------------Linear Queue In Array----------------------->*/

#include<stdio.h>

int size = 0,front = -1,rear = -1,flag = 0;

int enqueue(int arr[]){
	
	if(rear == size - 1){
		return -1;
	}else{

		if(front == -1){
			
			front++;
		}
		rear++;
		printf("Enter the Data : ");
		scanf("%d",&arr[rear]);
		return 0;
	}

}

int dequeue(int arr[]){

	if(front == -1){
		
		flag = 0;
		return -1;

	}else{
		flag = 1;
		int val = arr[front];
		if(front == rear){
			
			front = -1;
			rear = -1;
		}else{
			
			front++;
		}
		return  val;

	}

}

int frontt(int arr[]){
	
	if(front == -1){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return arr[front];
	}

}

int printQueue(int arr[]){
	
	if(front == -1){
		return -1;
	}else{
		
		for(int i = front;i < rear;i++){
			printf("|%d|->",arr[i]);
		}
		printf("|%d|\n",arr[rear]);

		return 0;
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
					int ret = enqueue(arr);
					if(ret == -1){
						printf("Queue OverFlow.\n");
					}
				}
				break;
			case 2:
				{
					int ret = dequeue(arr);
					if(flag == 0){
						
						printf("Queue is UnderFlow\n");
					}else{
						
						printf("%d is Dequeued\n",ret);
					}
				}
				break;
			case 3:
				{
					int ret = frontt(arr);
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
