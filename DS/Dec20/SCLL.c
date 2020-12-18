/*
Singly Circular Linked list

this list is connected as like ring where first node is connected with last node 
last node next pointer contains address of first node 

*/

//header file inclusion
#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

//structure of our Node
struct node	
{
	int data;
	struct node *next;
}; 

//user-req datatype creation
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


//function prototypes
void InsertFirst(PPNODE, PPNODE, int);
void InsertLast(PPNODE, PPNODE, int);
void InsertAtPose(PPNODE, PPNODE, int, int);

void DeleteFirst(PPNODE, PPNODE);
void DeleteLast(PPNODE, PPNODE);
void DeleteAtPose(PPNODE, PPNODE, int);

void Display(PNODE, PNODE);
int Count(PNODE, PNODE);
//end of function prototypes


//-----------------------------------------------------------------------------------------------------------//
//entrypoint/main  function

int main()
{
	//create two pointer to hold address of first and last node if list contians more than one node
	//if list contains one list in it then First as well as Last both pointer holds/points same memory address
	PNODE First = NULL;
	PNODE Last = NULL;
	
//--------------------------------------------------//
	//insert first node at list
	printf("node insert at first\n");
	InsertFirst(&First, &Last, 11);
	InsertFirst(&First, &Last, 21);
	InsertFirst(&First, &Last, 51);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//
	
	//Insert last node at list
	printf("node insert at last\n");
	InsertLast(&First, &Last, 101);
	InsertLast(&First, &Last, 102);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//
	
	//Insert node at perticular pose
	printf("node insert at perticular pose\n");
	InsertAtPose(&First, &Last, 1100, 3);
	InsertAtPose(&First, &Last, 1200, 5);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//

	//DeleteFirst node
	printf("deleting node first\n");
	DeleteFirst(&First, &Last);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//

	//DeleteLast node
	printf("Deleting last node\n");
	DeleteLast(&First, &Last);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//

	//DeleteAtPose node 
	printf("Delete node at perticular position\n");
	DeleteAtPose(&First, &Last, 3);
	DeleteAtPose(&First, &Last, 3);
	
	//display list of nodes
	Display(First, Last);
	printf("Total nodes in list: %d\n",Count(First, Last));
	printf("-----------------------------------------\n");
//--------------------------------------------------//

	return 0;
}


//-----------------------------------------------------------------------------------------------------------//
//insertFirst node

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
	//struct node *pointer created set with NULL value
	//create pointer to hold address of new node
	PNODE newn = NULL; 	
	
	
	//dynamic memory allocation
	newn = (PNODE)malloc(sizeof(NODE));
	
	//if not allocate memory
	if(newn == NULL)
	{
		printf("Insufficient memory\n");
		return;
	}
	
	//memory initialization/ struct member initialization
	newn->next = NULL;
	newn->data =  value;
	
	if(*Head == NULL && *Tail == NULL) //list is empty
	{
		*Head = newn;
		*Tail = newn;			
		(*Tail)->next = *Head;
	}
	else
	{
		newn->next = *Head;
		(*Tail)->next = newn;
		*Head = newn;
	}
}

//-----------------------------------------------------------------------------------------------------------//
//insert last nodes

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
	//struct node *pointer to hold address of heap
	PNODE newn = NULL;
	
	//memory allocation
	newn = (PNODE) malloc(sizeof(NODE));
	
	//if not allocate memory
	if(newn == NULL)
	{
		printf("Insufficient memory\n");
		return;
	}	
	
	//initialize allcated memory
	newn->next = NULL;
	newn->data = value;
	
	if(*Head == NULL  &&  *Tail == NULL)
	{
		*Head = newn;
		*Tail = newn;
		(*Tail)->next == *Head;
	}
	else
	{
		(*Tail)->next = newn;		
		*Tail = newn;
		(*Tail)->next = *Head;			
	}
}

//-----------------------------------------------------------------------------------------------------------//
//Insert node at perticular position

void InsertAtPose(PPNODE Head, PPNODE Tail, int value, int pose)
{
	//create pointer
	PNODE Temp = *Head;
	PNODE newn = NULL;
	
	int i = 0;
	int size = Count(*Head, *Tail);  // this function return existing node count
	
	//filter
	if(pose < 1 || pose > size+1)
	{
		printf("invalid position of list\n");
		return;
	}

	//node adding
	if(pose == 1)	//inser first node
	{
		InsertFirst(Head, Tail, value);
	}
	else if(pose == size+1)	//insert at last
	{
		InsertLast(Head, Tail, value);
	}
	else	//insert at particular pose
	{
		//memory allocation for node
		newn = (PNODE)malloc(sizeof(NODE));
		
		//check memory allocate or not
		if(newn == NULL)
		{
			printf("Insufficient memory\n");
			return;
		}
		
		//allcated memory initialization
		newn->data = value;
		newn->next = NULL;
		
		for(i = 1; i <= (pose-2); i++)
		{
			Temp = Temp->next;
		}
		
		newn->next = Temp->next;
		Temp->next = newn;
	}
}

//-----------------------------------------------------------------------------------------------------------//
//delete first node
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	if(*Head == NULL && *Tail == NULL) //when list is empty
	{
		return;
	}	
	else if(*Head == *Tail)// when list contains only one node
	{
		free(*Head);	//freeing first node
		*Head = NULL;
		*Tail = NULL;
	}
	else	//when more than one node in list
	{
		*Head = (*Head)->next;
		free((*Tail)->next);
		(*Tail)->next = *Head;		
	}
}

//-----------------------------------------------------------------------------------------------------------//
//delete node last

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	if(*Head == NULL && *Tail == NULL) //when list is empty
	{
		return;
	}	
	else if(*Head == *Tail)// when list contains only one node
	{
		free(*Head);	//freeing first node
		*Head = NULL;
		*Tail = NULL;
	}
	else	//when more than one node in list
	{
		PNODE Temp = *Head;
		while(Temp->next != *Tail) //traver till second last node
		{
			Temp = Temp->next;	//shif one to next node
		}
		
		free(*Tail);	//free last node
		*Tail = Temp;	//modify second last node as last node
		(*Tail)->next = *Head; //last node gets address of first node
	}
}

//-----------------------------------------------------------------------------------------------------------//
//Delete node at perticular position in list

void DeleteAtPose(PPNODE Head, PPNODE Tail, int pose)
{
	int i = 0;
	int size = Count(*Head, *Tail); //get all nodes count
	
	if(pose < 0 || pose > size+1)
	{
		printf("invaid position of list\n");
		return;
	}
	
	
	
	if(*Head == NULL && *Tail == NULL) //list is empty
	{
		printf("There is no node in list\n");
		return;
	}
	else if(pose == 1)
	{
		DeleteFirst(Head, Tail);
	}
	else if(pose == size+1)
	{
		DeleteLast(Head, Tail);
	}
	else
	{	
	
		PNODE Temp1 = *Head;
		PNODE Temp2 = NULL;
		
		for(i = 1; i <= (pose-2); i++)
		{
			Temp1 = Temp1->next;		
		}
		
		Temp2 = Temp1->next; //assign targeted node addresss to free
		Temp1->next = Temp2->next;
		free(Temp2);
	}
	
}



//-----------------------------------------------------------------------------------------------------------//
//Display nodes

void Display(PNODE Head, PNODE Tail)
{
	if(Head == NULL && Tail == NULL)
	{
		printf("There is no node in list\n");
		return;
	}
		
	//display all nodes in traversel
	do
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
		
	}while(Head != Tail->next);
	printf("|NULL|\n");
}


//-----------------------------------------------------------------------------------------------------------//
//Count nodes

int Count(PNODE Head, PNODE Tail)
{	
	int icnt = 0;
	
	if(Head == NULL && Tail == NULL)
	{
		printf("There is no node in list\n");
		return -1;
	}
		
	do
	{
		icnt++;
		Head = Head->next;
	}while(Head != Tail->next);
	
	return icnt;
}
