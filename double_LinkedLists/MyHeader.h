#ifndef _MYHEADER_H_
#define _MYHEADER_H_

extern struct node* head;

struct node{
	int data;
	struct node* prev;
	struct node* next;
};

void appendValue(int value);
void delete(int dloc);
int length();
void insertAfter(int iloc, int value);
void insertatBegin(int value);
void swapBYvalue(int sloc1,int sloc2);
void swapBYaddress(int loc);
void reverse();
void Display();




#endif