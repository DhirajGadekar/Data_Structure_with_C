#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct TreeNode {
	
	struct TreeNode *left;
	int data;
	struct TreeNode *right;
}TreeNode;

typedef struct Stack {
	
	TreeNode *BTNode;
	struct Stack *next;
}Stack;

Stack *top = NULL;
void push(TreeNode *temp) {
	
	Stack *newNode = (Stack*)malloc(sizeof(Stack));

	newNode->BTNode = temp;
	newNode->next = top;
	top = newNode;
}
bool isEmpty() {
	
	if(top == NULL) {
		
		return true;
	} else {
		
		return false;
	}
}
TreeNode* pop() {

	if(isEmpty()) {
		
		printf("Stack is Empty\n");
	}else {
		
		Stack *temp = top;
		TreeNode *item = top->BTNode;
		top = top->next;
		free(temp);

		return(item);
	}
}

void iterativeInOrder(TreeNode* root) {

	TreeNode *temp = root;
	if(temp == NULL) {
		
		printf("Tree is Empty\n");
	}else {
		
		while(!isEmpty() || temp != NULL) {
			
			if(temp != NULL) {
				push(temp);
				temp = temp->left;
			} else {
				
				temp = pop();
				printf("%d ",temp->data);
				temp = temp->right;
			}
		}
	}
}
TreeNode* createNode(int level) {
	
	level++;

	TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));

	printf("Enter the Data : ");
	scanf("%d",&newNode->data);

	char ch;
	getchar();
	printf("Do you want add Left subtree for level %d : ",level);
	scanf("%c",&ch);

	if(ch == 'Y' || ch == 'y') {
		
		newNode->left = createNode(level);
	} else {
		
		newNode->left = NULL;
	}
	
	getchar();
	printf("Do you want add Right subtree for level %d : ",level);
	scanf("%c",&ch);

	if(ch == 'Y' || ch == 'y') {
		
		newNode->right = createNode(level);
	} else {
		
		newNode->right = NULL;
	}
	
	return newNode;
}

void main() {
	
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));

	printf("Enter the Data : ");
	scanf("%d",&root->data);
	
	char ch;
	getchar();
	printf("Do you want add Left subtree for root Node : ");
	scanf("%c",&ch);

	if(ch == 'Y' || ch == 'y') {
		
		root->left = createNode(0);
	} else {
		
		root->left = NULL;
	}
	
	getchar();
	printf("Do you want add Right subtree for root Node : ");
	scanf("%c",&ch);

	if(ch == 'Y' || ch == 'y') {
		
		root->right = createNode(0);
	} else {
		
		root->right = NULL;
	}
	
	iterativeInOrder(root);
	printf("\n");
}
