//singly linked list to insert node at last

#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE,**PPNODE;


void InsertLast(PPNODE, int);
void Display(PNODE);


int main()
{
	PNODE First =NULL;
	
	InsertLast(&First,11);
	InsertLast(&First,21);
	InsertLast(&First,31);
	InsertLast(&First,41);
	Display(First);
 return 0;
}

void InsertLast(PPNODE head, int value)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->next=NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		PNODE Temp = *head; //if linked list is not empty then create same ptr as main First pointer to travel Linkedlist
		while(Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next = newn;
	}
}


void Display(PNODE First)
{
	while(First != NULL)
	{
		printf("|%d|->",First->data);
		First = First->next;
	}
	printf("|NULL|\n");
}
