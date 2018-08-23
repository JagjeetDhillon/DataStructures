#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CAPACITY  5

int top = -1;
//int stack[CAPACITY];
//int*stack = (int*)malloc(CAPACITY * sizeof(int)); //dynamic memory allocatin using malloc
//forward declarations
int push(int *stack[],int ele);
int isFull();
int isEmpty();
int pop();
void peak();
void traverse();
//void quit();
//######################

void main(){
	int*stack = (int*)malloc(CAPACITY * sizeof(int));
	while(1){
		int ch;
		int element;
		printf("Select from the following operation\n");
		printf("1.push \n");
		printf("2.pop \n");
		printf("3.peak \n");
		printf("4.traverse \n");
		//printf("5.quit \n");
		printf("Enter your choice: \n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				printf("Enter an integer element: \n");
				scanf("%d",&element);
				push(stack[], element);
				break;
			case 2: pop();
				break;
			case 3: peak();
				break;
			case 4: traverse();
				break;
			//case 5: quit();
			//	break;
			default:
				printf(" Invalid input\n" );
				break;

		}

	}	
}

int push(int *stack[],int ele){
	if(isFull()){
		printf("Stack is overflow!!!! \n");
	}
	else{
		top++;
		*stack[top] = ele;
		printf("%d element successfully added to stack\n", ele);	
	}
}

int isFull(){
	if(top == CAPACITY-1){
		return 1;
	}
	else{
		return 0;
	}
}
/*
int isEmpty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int pop(){
	if(isEmpty()){
		printf(" stack is undeflowed \n");
	}
	else{
		return *stack[top--];
	}
}
void peak(){
	if(isEmpty()){
		printf("stack is underflowed\n");
	}
	else{
		printf("Peak value of the stack i %d\n", *stack[top]);
	}
}
void traverse(){
	if (isEmpty())
	{
		printf("stack is underflowed\n");
	}
	else{
		int i=0;
		for(int i=0; i<=top; i++){
			printf("%d\n",*stack[i]);
		}
	}
}
/*
void quit(){
	exit();
}
*/
