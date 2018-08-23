#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"myHeader.h"

struct node* top = NULL;

void main(){
        int ch;
        while(1){
                printf("1.Push \n");
                printf("2.Pop \n");
                printf("3.Tranverse \n");
                printf("Enter the choice: ");
                scanf("%d", &ch);

                switch(ch){
                        case 1:
                                push();
                        break;
                        case 2:
                                pop();
                        break;
                        case 3: 
                                tranverse();
                        break; 
                        


                }
        }
}