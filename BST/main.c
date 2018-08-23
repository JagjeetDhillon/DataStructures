#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(int value);
void delete(int loc);
int length();
void preorderTranverse();
void inorderTranverse();
void postorderTranverse();

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root;

void main()
{
	int ch;
	printf("Enter the value of the BST elements: ");
	scanf("%d", &ch);
	insert(ch);

	printf("\n");
	while(1)
	{
		
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.length\n");
		printf("4.pre order tranverse\n");
		printf("5.in order tranverse \n");
		printf("6. post order tranverse \n");

		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter your value: ");
				scanf("%d", &ch);
				insert(ch);
			break;
			case 2:
				delete(ch);
			break;
			case 3:
				length();
			break;
			case 4:
				preorderTranverse(root);
			break;
			case 5:
				inorderTranverse(root);
			break;
			case 6:
				postorderTranverse(root);
			break;
			default:
		
				printf("############ invalid input ################\n");
			break;
		}
	}
}

void insert(int value)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;

	struct node* parent = root;
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		struct node* curr = root;
		while(curr!=NULL)	
		{
			parent = curr;
			if(temp->data>curr->data)
			{
				curr=curr->right;
			}
			else
			{
				curr=curr->left;
			}
		}
		if(temp->data>parent->data)
		{
			parent->right = temp;
		}
		else
		{
			parent -> left = temp;
		}

	}
}

void delete(int loc)
{

}

int length()
{

}
void preorderTranverse(struct node* temp)
{
	if(temp==NULL){
		return;
	}
	else{
		printf("%d\n",temp->data);
		preorderTranverse(temp->left);
		preorderTranverse(temp->right);
	}


}
void inorderTranverse(struct node* temp){
	if(temp==NULL){
		return;
	}
	else{
		inorderTranverse(temp->left);
		printf("%d\n",temp->data);
		inorderTranverse(temp->right);
	}
}

void postorderTranverse(struct node* temp){
	if(temp==NULL){
		return;
	}
	else{
		postorderTranverse(temp->left);
		postorderTranverse(temp->right);
		printf("%d\n",temp->data);
		
	}
}



















