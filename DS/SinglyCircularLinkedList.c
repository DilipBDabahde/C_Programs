//Singly Circular linked list

#include<stdio.h>
#include<stdlib.h>


#define True 1
#define False 0

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;


//all function declaration which will be defined as per req
void InsertAtFirst(PPNODE,PPNODE,int);
void InsertAtLast(PPNODE,PPNODE,int);
void InsertAtPose(PPNODE,PPNODE,int,int);
void DeleteAtFirst(PPNODE,PPNODE);
void DeleteAtLast(PPNODE,PPNODE);
void DeleteAtPose(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
int  Count(PNODE,PNODE);

////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtFirst(PPNODE Head, PPNODE Tail, int value)
{
	printf("InsertAtFIrst\n");
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->next=NULL;
	newn->data= value;
	
	if(*Head == NULL  && *Tail == NULL) //linked list is empty
	{	
		*Head = newn;
		*Tail = newn;
		(*Tail)->next = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
		(*Tail)->next = *Head;	
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head, PNODE Tail)
{
	do
	{
		printf("|%d|->",Head->data);
    	Head = Head->next;
	}while(Head != Tail->next);
	printf("|NULL|\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtLast(PPNODE Head, PPNODE Tail, int value)
{
	printf("InsertAtLast\n");
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->next = NULL;
	newn->data = value;
	
	if(*Head == NULL && *Tail == NULL)
	{
		*Head = newn;
		*Tail = newn;
		(*Tail)->next= newn;
	}
	else
	{
		
	 	(*Tail)->next = newn;
	 	*Tail=newn;
	 	(*Tail)->next = *Head;	 	
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head, PNODE Tail)
{
	int icnt = 0;
	
	do
	{
		icnt++;
		Head = Head->next;
	}while(Head != Tail->next);
	return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPose(PPNODE Head, PPNODE Tail, int value, int Pose)
{	
	printf("InsertAtPose\n");

	int size = Count(*Head, *Tail);
	
	if(Pose< 1 || Pose > size+1)
	{
		return;
	}
	
	if(Pose == 1)
	{
		InsertAtFirst(Head,Tail, value);	
	}
	else if(Pose == size+1)
	{
		InsertAtLast(Head,Tail, value);
	}
	else
	{
		PNODE newn = NULL;
		PNODE Temp = *Head;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn->next = NULL;
		newn->data= value;
		
		for(int i=1; i<=(Pose-2);i++)
		{
			Temp = Temp->next;			
		}
			newn->next = Temp->next;
			Temp->next= newn;
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtFirst(PPNODE Head, PPNODE Tail)
{
	printf("DeleteAtFirst\n");
	if(*Head == NULL  && *Tail == NULL)
	{
		return;
	}
	
	if(*Head == *Tail)  //if there is only one node in linked list
	{
		free(*Head);
		*Head = NULL;
		*Tail=NULL;
	}
	else
	{
		*Head = (*Head)->next;
		free((*Tail)->next);
		(*Tail)->next = *Head;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtLast(PPNODE Head, PPNODE Tail)
{
	printf("DeleteAtLast\n");
	if(*Head == NULL && *Tail == NULL)
	{
			return;	
	}
	else if(*Head == *Tail)
	{
		free(*Tail);
		*Tail = *Head = NULL;
	}
	else
	{
		PNODE Temp = *Head;
		while(Temp->next != (*Tail)) 
		{
			Temp = Temp->next;			
		}		
	
		free(*Tail);
		*Tail = Temp;
		(*Tail)->next = *Head;
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPose(PPNODE Head, PPNODE Tail, int Pose)
{

	printf("DeleteAtPose\n");
	int size = Count(*Head, *Tail);
	
	if(Pose < 1 || Pose > size)
	{
		return;
	}
	
	if(Pose == 1)
	{
		DeleteAtFirst(Head, Tail);
	}
	else if(Pose == size)
	{
		DeleteAtLast(Head, Tail);
	}
	else
	{
		PNODE Temp1 = *Head, Temp2 = NULL;
		for(int i = 1;i <=(Pose-2);i++)
		{
			Temp1 = Temp1->next;
		}
		Temp2 = Temp1->next;
		Temp1->next = Temp2->next;
		free(Temp2);
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

	PNODE First = NULL;
	PNODE Last = NULL;
	

	InsertAtFirst(&First, &Last, 11);	
	InsertAtFirst(&First, &Last, 5);
	InsertAtFirst(&First, &Last,21);	
	Display(First,Last);
	printf("---------------------------------\n");
	
                               
	InsertAtLast(&First, &Last, 111);
	InsertAtLast(&First, &Last, 222);
	Display(First,Last);
	printf("--------------------------------\n");
	
	InsertAtPose(&First, &Last, 333, 6);  
	Display(First, Last);
	printf("-----------------------------------\n");
	
	DeleteAtFirst(&First, &Last);
	DeleteAtFirst(&First, &Last);
	Display(First, Last);
	printf("----------------------------------\n");
	
	DeleteAtLast(&First, &Last);
	Display(First, Last);
	printf("----------------------------------\n");


	DeleteAtLast(&First, &Last);
	Display(First, Last);
	printf("----------------------------------\n");
	
	InsertAtFirst(&First, &Last,65);	
	Display(First,Last);
	printf("---------------------------------\n");
	
	InsertAtFirst(&First, &Last,75);	
	Display(First,Last);
	printf("---------------------------------\n");
	
	DeleteAtPose(&First, &Last,1);
	Display(First, Last);
	printf("----------------------------------\n");

	return 0;
}



