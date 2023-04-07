//Circular Queue by using Array :

#include<stdio.h>
#include<stdlib.h>

int size = 0,front = -1,rear = -1,flag = 0;

int enqueue(int *que){

	if((rear == size-1 && front == 0) || (rear == front - 1)){

		return -1;
	}else{
		if(front == -1){

			front++;
		}else{
			
			if(rear == size-1 && front != 0){
				front = -1;
			}
		}
		rear++;
		printf("Enter Data : ");
		scanf("%d",&que[rear]);
		
		return 0;
	}
}
int dequeue(int *que){

	if(front == -1){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		int val = que[front];
		if(rear == front){
			
			front = -1;
			rear = -1;
		}else{
			if(front == size -1){
				front = -1;
			}
			front++;
		}
		return val;
	}
}
int frontQueue(int *que){

	if(front == -1){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return que[front];
	}
}
int printQueue(int *que){

	if(front == -1){
		return -1;
	}else{
		if(front <= rear){
			for(int i = front;i <= rear;i++){
				printf("%d ",que[i]);
			}
		}else{
			if(front > rear){
				for(int i = front ;i <= size-1;i++){
					printf("%d ",que[i]);
				}
				for(int i = 0;i <= rear;i++){
					printf("%d ",que[i]);
				}
			}
		}
		return 0;
	}
}

void main(){

	printf("Enter the size of Queue : ");
	scanf("%d",&size);
	int que[size];

	while(1){
		int num;
		printf("\n1.Enqueue\n2.Dequeue\n3.FrontQueue\n4.PrintQueue\n5.Exit\n");
		printf("Enter your Choice : ");
		scanf("%d",&num);

		switch(num){
				case 1:{
						int ret = enqueue(que);
						if(ret == -1)
							printf("Queue is OverFlow\n");
					
					}
					break;
				case 2:{
					       int ret = dequeue(que);
					       if(flag == 0){
							printf("Queue is Empty\n");
					       }else{
							printf("%d is Dequeued\n",ret);
					       }
				       }
					break;
				case 3:{
					       int ret = frontQueue(que);
					       if(flag == 0){
							printf("Queue is Empty\n");
					       }else{
							printf("Front = %d\n",ret);
					       }
				       }
					break;
				case 4:{
						int ret = printQueue(que);
						if(ret == -1){
							printf("Queue is Empty\n");
						}
				       }
					break;
				case 5:
					exit(0);
					break;
				default:
					printf("Wrong Choice\n");

		}

	}

}
