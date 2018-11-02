#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct tree *left;
	struct tree *right;
};

struct node *newnode(int data)
{
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left=NULL;
	node->right=NULL;

	return(node);
};

void print(struct node *node)
{
	if(node == NULL)
	{
		return;
	}
	else{
        printf("%d\n", node->data);
	}
	print(node->left);
	print(node->right);
}

int main()
{
	struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	print(root);
	return 0;
}
