//deletion of after a given element - 

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
	int value;
	struct node *start;
	struct node *first;
	struct node *second;
	struct node *ptr;
	struct node *pptr;
	struct node *nptr;


	start =(struct node*)malloc(sizeof(struct node));
	first =(struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	ptr =(struct node*)malloc(sizeof(struct node));
	pptr =(struct node*)malloc(sizeof(struct node));
	nptr =(struct node*)malloc(sizeof(struct node));

	start->data = 2;
	start->next = first;

	first->data = 3;
	first->next = second;

	second->data=4;
	second->next=NULL;
	print(start);

	// after deletion -

	printf("Enter an element after you want to delete an element\n"); 
	scanf("%d", &value);

	pptr=NULL;
	nptr=NULL;
	ptr->next = start;

	while(nptr->data!=value){
		pptr=ptr;
		ptr = nptr;
		nptr=ptr->next;
	}

	pptr->next=nptr;
	free(ptr);

	print(start);
	return 0;
}