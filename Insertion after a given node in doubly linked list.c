//Insertion after a given node in doubly linked list --

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
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
	struct node *third;
	struct node *newnode;
	struct node *ptr;

	start =(struct node*)malloc(sizeof(struct node));
	first =(struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	third =(struct node*)malloc(sizeof(struct node));
	newnode =(struct node*)malloc(sizeof(struct node));
	ptr =(struct node*)malloc(sizeof(struct node));

	start = first;

	first->data = 3;
	first->prev = NULL;
	first->next = second;

	second->data=4;
	second->prev = first;
	second->next=third;

	third->data = 5;
	third->prev = second;
	third->next = NULL;

	print(start);

	//after insertion
	printf("Enter the value after which you want to insert the newnode - \n");
	scanf("%d", &value);
	printf("After insertion - \n");

	ptr = start;
	while(ptr->data!=value)
	{
		ptr = ptr->next;
	}

	newnode->data=6;
	newnode->next=ptr->next;
	ptr->next=newnode;
	newnode->prev = ptr;

	print(start);

	return 0;
}
