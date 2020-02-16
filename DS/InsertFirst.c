#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE, int);
void Display(PNODE);

int main()
{

	PNODE First = NULL;
	
	InsertFirst(&First,10);
	InsertFirst(&First,20);
	InsertFirst(&First,30);
	Display(First);
return 0;
}


void InsertFirst(PPNODE head, int value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->next=NULL;
	newn->data=value;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next =*head;
		*head=newn;	
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

