
/*
application to create simple binary tree program
*/

//header file inclusion

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

//structure declaration with member list
struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
};


struct node *createNewNode(int value)
{
	//create pointer to hold address 
	struct node *newn = NULL;
	
	//allcote memory dynamically
	newn = (struct node*)malloc(sizeof(struct node));
	
	//if memory not allcated then return from if block
	if(newn == NULL)
	{ 
		printf("error to allcate memory\n");
		return NULL;
	}
	
	//initiating allocated memory with values
	newn->lchild = NULL;
	newn->data = value;
	newn->rchild = NULL;
	
	//returning base address of allcated memory to caller function
	return newn;
}


//display keys/value of nodes
void displayNodeKeys(struct node *Head)
{
	if(Head == NULL)
	{
		return;
	}
	
	
	displayNodeKeys(Head->lchild);
	printf("%d ",Head->data);
	displayNodeKeys(Head->rchild);		
}


int main()
{
	
	//create root pointer which points to rootnode of tree
	struct node *root = createNewNode(11);
	
	if(root == NULL)
	{
		printf("Error to create root node\n");
		return -1;
	}
	
	//create left child
	root->lchild = createNewNode(21);
	
	//create right child
	root->rchild = createNewNode(51);
	
	//display keys of node
	displayNodeKeys(root);	

	return 0;
}
