#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"MyHeader.h"
struct node* head = NULL;
void main(){
	int ch;
	int a;
	int dloc;
	int iloc;
	int sloc;
	int sloc1;
	int sloc2;
	int count;
	int value;
	for(int i=0; i<=100; i++ ){
		appendValue(i);
		
	}
	while(1){
		printf("Please Enter your Choice \n");
		printf("1.append\n");
		printf("2.delete\n");
		printf("3.length\n");
		printf("4.insertafter\n");
		printf("5.swap\n");
		printf("6.reverse\n");
		printf("7.Display\n");
		printf("8.Insert at Begin\n");
		printf("9. swap by address\n");

		scanf("%d", &ch);
		switch(ch){
			case 1: 
				printf("Enter value here: ");
				scanf("%d", &a); 
				appendValue(a);
			break;
			case 2:
				printf("Enter Location to delete: ");
				scanf("%d", &dloc);
				delete (dloc);
			break;
			case 3:
				count = length();
				printf("%d \n",count);
			break;
			case 4:
				printf("Enter location to insert new node: ");
				scanf("%d", &iloc);
				printf(" \n Enter the Value: ");
				scanf("%d", &value);
				insertAfter(iloc,value);
				break;
			case 5:
				printf("Enter loction of swap element: ");
				scanf("%d", &sloc1);
				printf("Enter loction of swap element: ");
				scanf("%d", &sloc2);

				swapBYvalue(sloc1,sloc2);
			break;
			case 6: reverse();
			break;
			case 7: Display();
			break;
			case 8: 
				printf("Enter the value : ");
				scanf("%d" , &value);
				insertatBegin(value);
				break;
			case 9: 
				printf("Enter Location of first node from two to swap: ");
				scanf("%d", &sloc);
				swapBYaddress(sloc);
				break;
			default:
				printf("Invalid Choice\n");
			break;
		}
	}
}