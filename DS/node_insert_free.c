/*
1)WAP in C to create linked list of 3 node and display it


here below we accept node count from user and add N elements into list and display
*/


#include<stdio.h>
#include<stdlib.h>


//structure declaration
struct node
{
	int data;
	struct node *next;
};


//display linked list 
void display(struct node  *First)
{
	printf("List is: ");
	while(First != NULL)
	{
		printf("|%d|->",First->data);
		First = First->next;
	}	
	printf("|NULL|\n");
}


//fucntion to insert node in list
void insertNode(struct node **First, int value)
{
	struct node* newn = NULL;
	
	newn = (struct node*) malloc( sizeof(struct node));
	if(newn == NULL)
	{
		printf("Error to allocate memory\n");
		return;
	}
	
	
	//initialize nodes with values
	newn-> data = value;
	newn-> next = NULL;
	
	//if and else is used to insert node at the end of list	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		struct node*  temp = *First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
}	


//free all nodes from list
void freeAllNodes(struct node **First)
{
	if(*First == NULL)
	{
		printf("Linked list is emptry\n");
		return;
	}
	
	//temporary pointer
	struct node *temp1 = *First, *temp2 = NULL;
	
	//loop to free list nodes
	while(temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}



//entry point function
int main()
{

	//required variables
	int nodeSize = 0, ivalue = 0;
	struct node *Head = NULL;
	
	//enter total node size 
	printf("Enter node count: ");
	scanf("%d",&nodeSize);


	//loop to add nodes into list	
	for(int i = 1; i <= nodeSize; i++)
	{
		printf("Enter data for node [%d] : ",i);
		scanf("%d",&ivalue);
		
		insertNode(&Head, ivalue);	//function call to insert node into linked list	
	} 
	
	
	//display linkedlist node's data 
	display(Head);

	
	//call to free entire list
	freeAllNodes(&Head);

	return 0;	
}
