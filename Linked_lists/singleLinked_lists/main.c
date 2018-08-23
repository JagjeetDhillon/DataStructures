#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myHeader.h"

int len;

struct node* root = NULL;
void main(){
	int ch;
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

