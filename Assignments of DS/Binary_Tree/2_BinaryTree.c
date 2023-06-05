#include<stdio.h>
#include<stdlib.h>

struct treeNode {
	
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

struct treeNode* createNode(int level) {
	
	level = level + 1;

	struct treeNode* newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	
	printf("Enter the Data : \n");
	scanf("%d",&(newNode->data));
	
	//Left Subtree :
	
	char ch;
	
	getchar();
	printf("Do you want add Left subtree for level %d : \n",level);
	scanf("%c",&ch);

	if(ch == 'y' || ch == 'Y') {

		newNode->left = createNode(level);
	}else {
	
		newNode->left = NULL;
	}
	
	//Right SubTree :
	getchar();
	printf("Do you want add Right subtree for level %d : \n",level);
	scanf("%c",&ch);

	if(ch == 'y' || ch == 'Y') {

		newNode->right = createNode(level);
	}else {
	
		newNode->right = NULL;
	}
	return newNode;
}

void preOrder(struct treeNode *root) {
	
	if(root == NULL) {
		
		return;
	}
	printf("%d ", root->data);
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(struct treeNode *root) {
	
	if(root == NULL) {
		
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ", root->data);
}
int sumOfBinaryTree(struct treeNode *root) {
	
	if(root == NULL){
		
		return 0;
	}
	int leftsum = sumOfBinaryTree(root->left);
	int rightsum = sumOfBinaryTree(root->right);
	return leftsum + rightsum + root->data;
}
void main() {

	printf("Creating Binary Tree..........\n");
	struct treeNode* root = (struct treeNode*)malloc(sizeof(struct treeNode));

	printf("Enter the Data in Root Node : ");
	scanf("%d",&(root->data));

	printf("\t\t\tTree rooted With %d\n",root->data);

	//Left Subtree :

	char ch;

	getchar();

	printf("Do you want add Left subtree for root Node : ");
	scanf("%c",&ch);

	if(ch == 'y' || ch == 'Y') {

		root->left = createNode(0);
	}else {

		root->left = NULL;
	}

	//Right SubTree :

	getchar();
	printf("Do you want add Right subtree for root Node : \n");
	scanf("%c",&ch);

	if(ch == 'y' || ch == 'Y') {

		root->right = createNode(0);
	}else {

		root->right = NULL;
	}
	
	int size = sumOfBinaryTree(root);
	printf("Size of Binary Tree : %d\n",size);
}
