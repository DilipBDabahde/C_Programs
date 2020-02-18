//doubly linked list using c

#include<stdio.h>
#include<stdlib.h>


typedef struct node{

	struct node *prev;
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertAtFirst(PPNODE,int);
void InsertAtLast(PPNODE,int);
void InsertAtPose(PPNODE,int,int);
int Count(PNODE);
void DisplayF(PNODE);
void DisplayB(PNODE);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtFirst(PPNODE head, int value)
{
	printf("Insert at First\n");
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=value;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		(*head)->prev = newn;
		*head = newn;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayF(PNODE head)
{
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("|NULL|\n");	
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayB(PNODE head)  //need modification
{
	while(head->next != NULL)
	{
		head = head->next;	
	}
	
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->prev;	
	}
	printf("|NULL|\n");
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtLast(PPNODE head, int value)
{
	printf("Insert at Last\n");
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->next= NULL;
	newn->prev= NULL;
	newn->data= value;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		PNODE Temp = *head;
		
		while(Temp->next != NULL)
		{
			Temp = Temp->next;		
		}
		
		Temp->next = newn;
		newn->prev = Temp;	
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPose(PPNODE head, int value, int Pose)
{

	printf("Insert at Pose\n");
	int size = Count(*head);
	
	if(Pose < 1 || Pose > size+1)
	{
		return;
	}
	
	if(Pose==1)
	{
		InsertAtFirst(head, value);
	}
	else if(Pose == Pose+1)
	{
		InsertAtLast(head, value);
	}
	else
	{
		PNODE Temp1=*head;
		PNODE newn = NULL;
		newn = (PNODE)malloc(sizeof(NODE));	
		newn->next=NULL;
		newn->prev=NULL;
		newn->data=value;
		
		for(int i =1; i<=(Pose-1); i++)
		{
			Temp1 = Temp1->next;
		}
		
		newn->next = Temp1->next;
		newn->next->prev =newn;
		Temp1->next = newn;
		newn->prev =Temp1;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE head)
{
	int icnt = 0;
	while(head != NULL)
	{
		icnt++;
		head = head->next;	
	}
	return icnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtFirst(PPNODE head)
{
	printf("Delete At First\n");
	if(*head == NULL)
	{
		return;
	}
	if((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;	
	}
	else
	{
		*head = (*head)->next;
		free((*head)->prev);
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtLast(PPNODE head)
{	
	printf("Delete At Last\n");
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head= NULL;
	}
	else
	{
		PNODE Temp =*head;
		
		while(Temp->next != NULL)
		{	
			Temp = Temp->next;		
		}
		
		Temp->prev->next = NULL;
		Temp->prev = NULL;
		free(Temp);
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPose(PPNODE head, int Pose)
{
	printf("Delete At Pose\n");
	int size = Count(*head);
	
	if(Pose < 1 || Pose > size)
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
		PNODE Temp = *head;
		for(int i = 1; i<=(Pose-2);i++)
		{
			Temp = Temp->next;
		}
		
		Temp->next = Temp->next->next;
		free(Temp->next->prev);
		Temp->next->prev = Temp;		
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main()
{
	PNODE First = NULL;
	
	InsertAtFirst(&First, 51);
	InsertAtFirst(&First, 21);
	InsertAtFirst(&First, 11);
	printf("-------------------------------\n");
	printf("Forward Traversal of linked linst\n");
	DisplayF(First);

	printf("-------------------------------\n");
	printf("Backward Traversal of linked linst\n");
	DisplayB(First);
	printf("---------------------------------\n");
	printf("Forward Traversal of linked linst\n");
	InsertAtLast(&First,71);
	InsertAtLast(&First,81);
	DisplayF(First);
	printf("---------------------------------\n");
	printf("Backward Traversal of linked linst\n");
	DisplayB(First);
	
	printf("------------------------------------\n");
	printf("Total nodes in linked list are %d\n",Count(First));
	InsertAtPose(&First,155,2);
	DisplayF(First);
	printf("-------------------------------------\n");
	DeleteAtFirst(&First);
	DisplayF(First);
	printf("--------------------------------------\n");
	DeleteAtLast(&First);
	DisplayF(First);
	printf("----------------------------------------\n");
	DeleteAtPose(&First,3);
	DisplayF(First);
	
	return 0;
}
