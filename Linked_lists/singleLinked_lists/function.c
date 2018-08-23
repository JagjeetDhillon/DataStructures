#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myHeader.h"


void append(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->link = NULL;

	if(root == NULL){
		root = temp;
	}
	else{
		struct node* p;
		p = root;
		while(p->link!=NULL){
			p = p->link;
		}
		p->link = temp;
	}

}
// to insert the node at the front
void insertATfront(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &temp->data);
	temp->link = NULL;

	if(root == NULL){
		root = temp;
	}
	else{
		temp->link = root;
		root = temp;
	}

}
// to insert the node at particular position
void insertAfter(){
	int loc;
	int count = 1;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter Data: ");
	scanf("%d", &temp->data);
	temp->link = NULL;

	printf("Enter Location: ");
	scanf("%d", &loc);

	if(loc>length()){
		printf("this location is not valid, Linked list only consist %d nodes\n",length());
	}
	else{
		struct node* p;
		p = root;
		while(count != loc){
			p = p->link;
			count++;
		}
		temp->link= p->link;
		p->link = temp;
	}

}
// to count the number of nodes in Linked List
int length(){
	int count = 0;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = root;
	while(temp != NULL){
		count++;
		temp = temp->link;
	}
	return count;
}
// to display all the nodes in linked list
void display(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = root;
	if(temp == NULL){
		printf(" List is Empty \n");
	}else{
		while(temp != NULL){
			printf("%d-->",temp->data);
			temp = temp -> link;
		}
		printf("\n");
	}

}
// to delete a node at particular positon
void deleteValue(){
	struct node* temp;
	int loc;
	printf("Enter the location of node to be deleted: ");
	scanf("%d", &loc);

	if(loc>length()){
		printf("Invalid node location, total nodes in this linked list are %d \n",length());
	}
	else if(loc == 1){
		temp = root;
		root = temp->link;
		temp->link=NULL;
		free(temp);
	}else{
		int i=1;
		struct node*p;
		struct node* q;
		p = root;

		while(i<loc-1){
			p = p->link;
			i++;
		}
		q = p->link;
		p->link = q->link;
		q->link= NULL;
		free(q);

	}

}

// to swap two adjacent nodes 

void swap(){
	int loc;
	int i=1;
	printf(" Enter the location: ");
	scanf("%d", &loc);
	if (loc >= length()){
		printf("Please Enter the number of first node in two swap positions\n");
	}
	else{
		struct node* p;
		struct node* q;
		struct node* r;
		p = root;
		while(i<loc-1){
			p=p->link;
			i++;
		}
		q = p->link;
		r = q->link;

		q->link = r->link;
		r->link = q;
		p->link = r;

	}
}

//to reverse the single linked list
void reverseSingle(){
	int temp;
	struct node* p = root;
	struct node* q = root;
	int i = 0;
	int j = length()-1;

	while(i<j){
		int k=0;
		while(k<j){
			q = q->link;
			k++;
		}
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->link;
		q = root;

	}
}