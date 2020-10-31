// this program is used to create singly link list (adding nodes dynamically)and execute its all operations like adding nodes,deleting.displaying etc...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// user define header
#include"myHeader.h"

int len;

// creating a pointer root of node data type
struct node* root = NULL;
void main(){
	int ch;
	// to display all operations on link list
	while(1){
		//printf("Enter your choice\n");
		printf("1.Append \n");
		printf("2.insert at front \n");
		printf("3.insert after \n");
		printf("4.lenght \n");
		printf("5.Display \n");
		printf("6.Delete \n");
		printf("7:swap \n");
		printf("8:reverseSingle \n");

		printf("Enter your choice here: ");
		scanf("%d", &ch);

		// to execute any one case at a time
		// these all functions (append(),insertAfront(),etc) are define in user define header called "myHeader.h"
		switch(ch)
		{
			case 1: 
				append();
			break;
			case 2: insertATfront();
			break;
			case 3: insertAfter();
			break;
			case 4: 
				len = length();
				printf("total number of nodes are : %d\n",len);
			break;
			case 5: display();
			break;
			case 6: deleteValue();
			break;
			case 7: swap();
			break;
			case 8: reverseSingle();
			break;
			default: 
			printf("invalid input \n");
			break;

		}

	}

}

