#ifndef _MYHEADER_
#define  _MYHEADER_
struct node{
	int data;
	struct node* link;
};
struct node* top;

void push();
void pop();
void tranverse();

#endif