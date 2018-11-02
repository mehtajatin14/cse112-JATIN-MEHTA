#include<stdio.h>
#include<stdlib.h>

struct node
{
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

int main()
{
	struct node *start = NULL;
	struct node *first= NULL;
	struct node *third= NULL;

	start = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	start->data = 2;
	start->next = first;

	first->data = 3;
	first->next = third;

	third ->data = 4;
	third ->next = NULL;

	print(start);
	return 0;
}