#ifndef _MYHEADER_H_
#define _MYHEADER_H_

struct node{
	int data;
	struct node* link;
};

extern int len;
extern struct node* root;
void append();
void insertATfront();
void insertAfter();
int length();
void display();
void deleteValue();
void swap();
void reverseSingle();

#endif