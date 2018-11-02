//deletion of last element - 

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next; 
};

void print(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d\n", n->data);
		n = n->next;					
	}
}

int main(){
	struct node *start;
	struct node *first;
	struct node *second;
	struct node *ptr;
	struct node *pptr;


	start =(struct node*)malloc(sizeof(struct node));
	first =(struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	ptr =(struct node*)malloc(sizeof(struct node));
	pptr =(struct node*)malloc(sizeof(struct node));

	start->data = 2;
	start->next = first;

	first->data = 3;
	first->next = second;

	second->data=4;
	second->next=NULL;
	print(start);

	// after deletion - 

	ptr->next = start;

	while(ptr->next!=NULL){
		pptr=ptr;
		ptr = ptr->next;
	}

	pptr->next=NULL;
	free(ptr);

	print(start);
	return 0;
}