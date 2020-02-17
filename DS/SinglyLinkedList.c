//singly linked list

#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;


struct node
{
	int data;
	struct node *next;  //self referencial pointer
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//some usefull function prototype declaration

void InsertAtFirst(PPNODE, int);
void InsertAtLast(PPNODE, int);
void InsertAtPose(PPNODE,int,int);
void DeleteAtFirst(PPNODE);
void DeleteAtLast(PPNODE);
void DeleteAtPose(PPNODE,int);
void Display(PNODE);
int  Count(PNODE);


void InsertAtFirst(PPNODE head, int value)
{
	PNODE newn = NULL;  //
	
	newn = (PNODE)malloc(sizeof(NODE));  //memory allocatiion 
	
	newn->data = value;
	newn->next = NULL;    //node initialization   
	
	if(*head == NULL) //linked list is empty
	{
		*head = newn;   
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}
}
/////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head= head->next;
	}
	printf("|NULL|\n");
}

/////////////////////////////////////////////////////////////////////////////

void InsertAtLast(PPNODE head, int value)
{
	PNODE newn = NULL;
	PNODE Temp = *head;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data= value;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while(Temp->next != NULL)
		{
			Temp = Temp->next;
		}		
		Temp->next = newn;
	}
}
//////////////////////////////////////////////////////////////////////////////

void InsertAtPose(PPNODE head, int value, int Pose)
{
	
	int size = Count(*head);
	int i = 0;
	
	if((Pose < 1) || (Pose > size+1))
	{
		return;
	}
	
	if(Pose == 1)
	{
		InsertAtFirst(head, value);
	}
	else if(Pose == size+1)
	{
		InsertAtLast(head,value);
	}
	else
	{
		PNODE Temp = *head;
		PNODE newn = NULL;
		
		int i = 0;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data= value;
		newn->next= NULL;
		
		for(i = 1; i<=(Pose-2);i++)
		{
			Temp = Temp->next;		
		}
		
		newn->next = Temp->next;
		Temp->next = newn;	
	}
}

////////////////////////////////////////////////////////////////////////////////

int Count(PNODE First)
{
	int icnt = 0;
	while(First != 0)
	{
		icnt++;
		First = First ->next;
	}
	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtFirst(PPNODE head)
{	
	if(*head == NULL)
	{
		return;
	}
	else
	{
		PNODE Temp = *head;
		*head = (*head)->next;
		free(Temp);	
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtLast(PPNODE head)
{
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->next == NULL)
	{
		free((*head)->next);
		*head=NULL;
	}
	{
		PNODE Temp = *head;
		
		while(Temp->next->next != NULL)
		{
			Temp = Temp->next;
		}
		free(Temp->next);
		Temp->next = NULL;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPose(PPNODE head, int Pose)
{
	int size = Count(*head);
	
	if(Pose<1 || Pose > size)
	{
		return;
	}
	
	if(Pose == 1)
	{
		DeleteAtFirst(head);
	}
	else if(Pose == size)
	{
		DeleteAtLast(head);	
	}
	else
	{
	   int i = 0;
	   PNODE Temp1 = *head;
	   PNODE Temp2 = NULL;
	   for(i =1; i<=(Pose-2); i++)
	   {
	   		Temp1 = Temp1->next;	
	   }		
	   Temp2 = Temp1->next;
	   Temp1->next = Temp2->next;
	   free(Temp2);
	}
}


//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE First = NULL;
	
	printf("InsertAtFirst\n");
	InsertAtFirst(&First,121);
	InsertAtFirst(&First,101);
	InsertAtFirst(&First,51);
	InsertAtFirst(&First,11);
	Display(First);
	printf("-----------------------------------\n");
	printf("InsertAtLast\n");
	InsertAtLast(&First,21);
	Display(First);
	printf("------------------------------------");
	printf("\nTotal nodes are in Lined list %d\n",Count(First));
	InsertAtPose(&First,150,2);
	Display(First);
	printf("----------------------------\n");
	printf("DeleteAtFirst\n");
	DeleteAtFirst(&First);
	Display(First);
	printf("------------------------------\n");
	printf("DeleteAtLast\n");
	DeleteAtLast(&First);
	Display(First);
	printf("------------------------------\n");
	DeleteAtPose(&First,3);
	Display(First);

	return 0;
}

