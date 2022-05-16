//tree prog
#include "header.h"

struct node{
 int data;
 struct node *left;
 struct node *right;
}*root=NULL,*temp=NULL;

void find(struct node* tptr)
{
	if((temp->data > tptr->data) && (tptr->right!=NULL)) // go right
		find(tptr->right);
	else if((temp->data > tptr->data) && (tptr->right==NULL))
		tptr->right=temp;

	/*left*/
	else if((temp->data < tptr->data) && (tptr->left!=NULL))
		find(tptr->left);
	else if((temp->data < tptr->data) && (tptr->left==NULL))
		tptr->left=temp;

}

void inorder(struct node* tptr)
{
	if(tptr == NULL)
	{
		printf("\n Tree is empty\n");
		return;
	}
	if(tptr->left != NULL)
		inorder(tptr->left);
	
	printf(" %d ", tptr->data);
	
	if(tptr->right != NULL)
		inorder(tptr->right);
	
}
void bst()
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data = rand();
	temp->left = NULL;
	temp->right= NULL;
	if(root==NULL)
		root=temp;
	else
		find(root);
}


void create_tree()
{
	printf("\n var is odd... Making tree...\n");	
	for(int i=1;i<=7;i++)		
		bst();		
	
	inorder(root);
	printf("\n\n Tree done...");
}
