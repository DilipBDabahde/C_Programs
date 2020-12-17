//Doubly linear linked list
/*
	in this application we insert nodes are some defferent locations and delete node from different location from the 
	list and display list in ascending and descending orders
*/
//include required header files
#include<stdio.h>
#include<stdlib.h>

//define macros
#define True 1
#define False 0

//struct declaring
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

//create user-req type using in-built
typedef int BOOL;
typedef struct node NODE;
typedef NODE *PNODE;
typedef PNODE *PPNODE;


//fucntions prototype
void InsertFirst(PPNODE, int);
void InsertLast(PPNODE,int);
void InsertAtPose(PPNODE,int,int);

void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPose(PPNODE,int);

void DisplayF(PNODE);
void DisplayB(PNODE);
int Count(PNODE);


//entry point function
int main()
{
	PNODE First = NULL;
	int iret = 0;
	
	//InsertFirst node
	printf("Inserting node at first\n");
	InsertFirst(&First, 11);
	InsertFirst(&First, 21);
	InsertFirst(&First, 51);
	InsertFirst(&First, 101);
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
	
	//InsertLast node
	printf("Inserting node at last\n");
	InsertLast(&First, 111);
	InsertLast(&First, 222);
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
	
	//InsertAtPose
	printf("Inserting node at pose\n");
	InsertAtPose(&First, 1100, 3);
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
	
	
	//DeleteFirst
	printf("Deleting first node\n");
	DeleteFirst(&First);
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
	
	
	//DeleteLast
	printf("Deleting Last node\n");
	DeleteLast(&First);
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
	
	
	//Delete At pose
	printf("Delete at pose\n");
	DeleteAtPose(&First, 3); //position wise delete node
	
	//display in ascending as we as descending form
	printf("Displaying nodes in Ascending form\n");
	DisplayF(First);
	
	printf("Displaying nodes in Descending form\n");
	DisplayB(First);
	
	printf("Total nodes count is: %d\n",Count(First));
	printf("---------------------------------------------------\n");
		
	return 0;
}


//------------------------------------------------------------------------------------------//
//inserting node at first
void InsertFirst(PPNODE Head, int value)
{
	PNODE newn = NULL; //struct node *newn is pointer which can point to dynamic memory
	
	
	//dynamic memory allocation 
	//newn gets address of dynamically allcoated memory
	newn = (PNODE)malloc(sizeof(NODE));

	//initialize memory/node
	newn->next = NULL;
	newn->data = value;
	newn->prev = NULL;  
	
	if(*Head == NULL) //if list is empty then assign newn to *Head/+First
	{
		*Head  = newn;
	}
	else
	{
		newn->next = *Head;		//node conection
		(*Head)->prev = newn;	
		*Head = newn;
	}
}

//------------------------------------------------------------------------------------------//
//Display nodes in ascending order

void DisplayF(PNODE Head)
{
	if(Head == NULL)
	{	
		return;
	}
	while(Head != NULL)
	{
		printf("|%d",Head->data);
		Head  = Head->next;
	}
	printf("|NULL|\n");
}

//------------------------------------------------------------------------------------------//
//Insert Last

void InsertLast(PPNODE Head, int value)
{
	
	PNODE newn = NULL; //create struct node *pointer as newn
	PNODE Temp = *Head;
	
	
	//allocate dynamic memory
	newn = (PNODE) malloc(sizeof(NODE));
	
	//allocated memory/node initialize
	newn->next = NULL;
	newn->data = value;
	newn->prev = NULL;
	
	
	if(*Head == NULL) //if list is empty
	{
		*Head = newn;
	}
	else
	{
		while(Temp->next != NULL)	//traverse till last node
		{
			Temp = Temp->next;
		}
		
		Temp->next = newn; //temp->next we add address of newn
		newn->prev = Temp; //newn->prev which holds address of existing list last node address
	}
}

//------------------------------------------------------------------------------------------//
//Insert node at perticular pose

void InsertAtPose(PPNODE Head, int value, int pose)
{
	int i = 0;
	int size = Count(*Head);
	
	if(pose < 1 || pose > size+1)
	{
		printf("invalid pose selection\n");
		return;
	}
	
	if(pose == 1)
	{
		InsertFirst(Head,value);
	}
	else if(pose == size+1)
	{
		InsertLast(Head, value);
	}
	else
	{
		//create newn pointer and allocate memory		
		PNODE newn = (PNODE)malloc(sizeof(NODE));
		
		//initialize memory/node
		newn->data = value;
		newn->next = NULL;
		newn->prev = NULL;
		
		PNODE Temp = *Head;
		
		for(i = 1; i <= (pose - 2); i++)	
		{
			Temp = Temp->next;
		}
		
		newn->next = Temp->next;
		newn->next->prev = newn;
		Temp->next = newn;		
		newn->prev = Temp;
	}
}


//------------------------------------------------------------------------------------------//
//delete first node
void DeleteFirst(PPNODE Head)
{
	PNODE Temp = *Head;
	
	if(*Head == NULL) ///list is empty
	{
		return;
	}
	else if((*Head)->next == NULL) //list contains one node
	{
		free(*Head);		//free first node
		*Head = NULL;		//set *head as NULL, where there is no node in list
	}
	else	//list has more than one node
	{
		*Head = (*Head)->next; //go to second node
		free((*Head)->prev);	//free first node
		(*Head)->prev = NULL;	 //set second node prev part as NULL	
	}
}



//------------------------------------------------------------------------------------------//
//delete last node

void DeleteLast(PPNODE Head)
{
	if(*Head == NULL)	//when list is empty
	{
		return;	
	}
	else if((*Head)->next == NULL) //when list contains one node
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		PNODE Temp = *Head;
		PNODE Temp2 = NULL;
		
		while(Temp->next != NULL) //traverse till last node
		{
			Temp = Temp->next;
		}
		
		Temp->prev->next = NULL; // from last node go back to second last node next and set it NULL
		free(Temp);				 //then free last node
	}
}

//------------------------------------------------------------------------------------------//
//delete node by given pose wise

void DeleteAtPose(PPNODE Head, int pose)
{
	int size = Count(*Head);
	int i = 0;	
	PNODE Temp = *Head;
	
	if(pose < 1 || pose > size)
	{
		printf("Invalid position\n");
		return;
	}
	
	if(pose == 1)
	{
		DeleteFirst(Head);
	}
	else if(pose == size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i = 1; i <= (pose-2); i++)
		{
			Temp = Temp->next;
		}
		
		Temp->next = Temp->next->next;
		free(Temp->next->prev);
		Temp->next->prev = Temp;
	}
	
}

//------------------------------------------------------------------------------------------//
//Display nodes in descending order

void DisplayB(PNODE Head)
{
	if(Head == NULL)
	{
		return;
	}

	//travel till last node
	while(Head->next != NULL)
	{
		Head = Head->next;
	}
	
	while(Head != NULL) //traverse last to first node 
	{
		printf("|%d",Head->data);	//display data
		Head = Head->prev;			//traverse back one by one node
	}
	printf("|NULL|\n");
}

//------------------------------------------------------------------------------------------//
//display total nodes count;

int Count(PNODE Head)
{
	int icnt = 0;
	
	while(Head != NULL)
	{
		Head = Head->next;
		icnt++;
	}
	
	return icnt;
}
