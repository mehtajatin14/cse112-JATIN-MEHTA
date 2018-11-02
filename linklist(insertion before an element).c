//Insertion before a given node - 

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
	struct node *new;
	struct node *pptr;
	struct node *ptr;

	start =(struct node*)malloc(sizeof(struct node));
	first =(struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	new =(struct node*)malloc(sizeof(struct node));
	pptr =(struct node*)malloc(sizeof(struct node));
	ptr =(struct node*)malloc(sizeof(struct node));

	start->data = 2;
	start->next = first;

	first->data = 3;
	first->next = second;

	second->data=4;
	second->next=NULL;
	print(start);

	// insertion after pointer first- 

	printf("Enter the value before which you want to insert a new node - \n");
	scanf("%d", &value);

	ptr->next = start;
	while(ptr->data!=value)
	{
		pptr = ptr;
		ptr = ptr->next;
	}	

	new->data = 7;
	new ->next=ptr;
	pptr->next = new;

	print(start);
	return 0;
}