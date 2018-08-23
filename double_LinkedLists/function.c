#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"MyHeader.h"

void appendValue(int value){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = value;
	temp->prev = NULL;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}
	else{
		struct node* p;
		p=head;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = temp;
		temp->prev = p;
	}

}
void delete(int dloc){
	struct node* temp;
	struct node* p;
	struct node* q;
	if (dloc==1)
	{
		temp = head;
		head = temp->next;
		temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
	}
	else if(dloc==length())
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->prev->next=NULL;
		p->prev=NULL;
		free(p);
	}
	else
	{
		int i=1;
		p=head;
		while(i<dloc-1)
		{
			p=p->next;
			i++;
		}
		q= p->next;
		p->next=q->next;
		q->next->prev=p;
		q->next=NULL;
		q->prev=NULL;
		free(q);
	}

}
int length(){
	struct node* p;
	p = head;
	int count = 0;
	if(p == NULL){
		printf("double linked list is empty\n");
		return count;
	}
	else{
		while(p != NULL){
			count ++;
			p = p->next;
		}
		return count;
	}

}
void insertatBegin(int value){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = value;
	temp->prev = NULL;
	temp->next = NULL;
	struct node* p;
	p = head;
	if(p == NULL){
		head = temp;
	}
	else{
		temp->next = p;
		p->prev = temp;
		head = temp;
	}
}


void insertAfter(int iloc, int value){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = value;
	temp->prev = NULL;
	temp->next = NULL;

	if(iloc>=length()){
		printf("location don't exits, this double Linked Lists has only %d nodes \n",length());
	}
	else{
		int i=1;
		struct node* p;
		p = head;
		while(i<iloc){
			p= p->next;
			i++;
		}
		temp->next = p->next;
		p->next->prev = temp;
		temp->prev = p;
		p->next=temp;
	}
}
void swapBYaddress(int loc){
	int i=1;
	struct node* p;
	struct node* q;
	struct node* r;
	p = head;
	if(loc>length()){
		printf(" nodes not present, number of nodes in this double linked lists are %d\n",length());

	}
	else{
		while(i<loc-1){
			p=p->next;
			i++;
		}
		q=p->next;
		r=q->next;
		q->next = r->next;
		r->next->prev = q;
		r->next = q;
		q->prev = r;
		p->next = r;
		r->prev = p;

	}
}

void swapBYvalue(int sloc1,int sloc2){
	if(sloc1>length()||sloc2>length()){
		printf("invalid node location\n");
	}
	else{
		struct node* p = head;
		struct node* q = head;
		int temp;
		int i=0;
		int j=0;
		while(i<sloc1){
			p = p->next;
			i++;
		}
		while(j<sloc2){
			q=q->next;
			j++;
		}
		temp = p->data;
		p->data = q->data;
		q->data = temp;


	}

}
void reverse()
{
	/*
	int temp;
	struct node* p= head;
	struct node* q = head;
	int i=0;
	int j=length()-1;
	while(q->next!=NULL){
		q=q->next;
	}
	while(i<j){
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		p=p->next;
		q=q->prev;
		i++;
		j--;
	}
	*/
	struct node* p;
	struct node* temp;
	p=head;
	if(p==NULL)
	{
		printf("This double linked list is empty\n");
	}
	else if(p->next==NULL)
	{
		printf("There is only one node in linked list, no need to reverse\n");
	}
	else
	{
		while(p!=NULL)
		{
			temp=p->prev;
			p->prev=p->next;
			p->next= temp;
			p=p->prev;
		}
		if(temp!=NULL){
			head=temp->prev;
		}
	}

}
void Display(){
	struct node* p;
	p = head;
	if(p == NULL){
		printf("double linked list is empty\n");
	}
	else{
		while(p != NULL){
			printf("%d --> ",p->data);
			p= p->next;
		}
		printf("\n");
	}

}
