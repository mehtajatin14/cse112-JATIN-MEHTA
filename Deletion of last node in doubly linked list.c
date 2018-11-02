//Deletion after a given node in doubly linked list --

#include<stdio.h>
#include<stdlib.h>

struct node{
	char [50];
	struct node *next;
	struct node *prev;
};


int main(){
	int n;
	int x;
	char x[100];
	
	struct node *start;
	struct node *a;
	struct node *b;
	struct node *c;
	struct node *d;
	struct node *e;
	struct node *f;
	struct node *g;
	struct node *h;
	struct node *newnode;
	struct node *ptr;
	struct node *pptr;

	start =(struct node*)malloc(sizeof(struct node));
	a =(struct node*)malloc(sizeof(struct node));
	b =(struct node*)malloc(sizeof(struct node));
	c =(struct node*)malloc(sizeof(struct node));
	d =(struct node*)malloc(sizeof(struct node));
	e =(struct node*)malloc(sizeof(struct node));
	f =(struct node*)malloc(sizeof(struct node));
	g =(struct node*)malloc(sizeof(struct node));
	h =(struct node*)malloc(sizeof(struct node));
	newnode =(struct node*)malloc(sizeof(struct node));
	ptr =(struct node*)malloc(sizeof(struct node));
	pptr =(struct node*)malloc(sizeof(struct node));

	printf("Enter value of n - \n");

	
	//after deletion

    printf("After Deletion - \n");

	printf("Enter any value after which you want to delete the node - \n", );
	scanf("%d", &value);

	ptr=start;

	while(ptr->data!=value)
	{
		ptr=ptr->next;
	}

	ptr->next=ptr->next->next;
	ptr->next->next->prev= ptr;
	free(ptr);
	print(start);
	return 0;
}
