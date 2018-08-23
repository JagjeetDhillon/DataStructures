#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"myHeader.h"

void push(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter your data: ");
	scanf("%d",&temp->data);
	temp->link = top;
	top = temp;

}
void pop(){
	if(top == NULL){
		printf(" No element is present in stack\n");
	}
	else{
	struct node* temp;
	temp = top;
	printf("%d \n", temp->data);
	top = top->link;
	temp->link = NULL;
	free(temp);

	}
}
void tranverse(){
	struct node* temp;
	temp =  top;
	if(top==NULL){
		printf(" Stack is underflowed\n");
	}
	else{
		while(temp != NULL){
			printf("%d \n",temp->data);
			temp = temp->link;
		}
	}

}