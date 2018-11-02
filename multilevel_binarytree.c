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

void delete(int value, struct node *node)
{
  struct node *left;
  left = node;
  struct node *right;
  struct node *temp;
  temp = node;
  if(left->data==value&&left->left==NULL&&left->right==NULL)
  {
    left->data=NULL;
  }
  else
  {
		if(node->left!=NULL)
		{
				delete(value, left->left);
		}
		else
		{
			if(left->right==NULL)
			{

			}
			delete(value, left->right);
		}
	}
  }
  right = temp->right;
  if (right->data==value&&right->left==NULL&&right->right==NULL) {
    right->data=NULL;
  }
  else
  {
    temp
  }
}

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
    struct node *a;
    struct node *b;
	struct node *root = newnode(1);
	a= root->left = newnode(2);
	b= root->right = newnode(3);
	a->left = newnode(4);
	a->right = newnode(5);
	b->left = newnode(6);
	b->right = newnode(7);
	print(root);
  delete(4,root);
	return 0;
}
