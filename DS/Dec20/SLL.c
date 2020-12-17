//Singly Linked list

//header file inclusion
#include<stdio.h>
#include<stdlib.h>

//create use-requied data type
typedef int BOOL;

#define True 1
#define False 0

//declaring structure with memberes
struct node
{
	int data;		
	struct node *next;  //struct pointer
};

//create use-requied data type
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


//functions prototype
void InsertFirst(PPNODE, int);
void InsertLast(PPNODE,int);
void InsertAtPose(PPNODE,int,int);

void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPose(PPNODE,int);

void Display(PNODE);
int  Count(PNODE);

//--------------------------------------------------------------------------------------------------------//
//entry point function
int main()
{
	int iret = 0;
	PNODE First = NULL;  // struct node First = NULL;
						 // node is structure created using struct keyword 
						 //in this node structure two members are defined 
						 //first is int type
						 //second is struct node * which is pointer to next node

	//inserting nodes 
	//insert node at first	
	printf("----------------------------------\n");
	printf("Insert first\n");
	InsertFirst(&First, 11); //we pass first address and value to InsertFirst function definition
	InsertFirst(&First, 21);
	InsertFirst(&First, 51);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));

	printf("----------------------------------\n");
	printf("Insert last\n");
	//insert node atlast
	InsertLast(&First, 111);
	InsertLast(&First, 222);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));
	
	printf("----------------------------------\n");
	printf("Insert at pose\n");
	//insert node at pose
	InsertAtPose(&First, 101, 2);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));
	
	
	//deleting nodes
	
	//delete first
	printf("----------------------------------\n");
	printf("delete first\n");
	DeleteFirst(&First);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));

	//delete last
	printf("----------------------------------\n");
	printf("delete last\n");
	DeleteLast(&First);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));
	
	//delete at pose
	printf("----------------------------------\n");
	printf("delete at pose\n");
	DeleteAtPose(&First, 2);
	Display(First);
	printf("Total Nodes are : %d\n",Count(First));
	printf("----------------------------------\n");
	
	
	return 0;
}

//--------------------------------------------------------------------------------------------------------//

//in this funstion we insert node at first of our singly linked list

void InsertFirst(PPNODE Head, int value)  //here Head holds address of First Pointer and value
{										
	PNODE newn = NULL; //create new now using typedef of struct node 
					   //struct node is struct which contains two members
					   //first is data
					   //second is struct node *next
					   //here two members are there in structure of size 8 bytes
	
	//now allocating memory to newn
	//newn is pointer of type struct node 
	//this pointer can point to dynamically allocated node's memory
	
	newn = (PNODE) malloc(sizeof(struct node /*NODE*/));
	
	//if sufficient memory not available 
	if(newn == NULL)
	{
		printf("Unable to allocate memory\n");
		return;
	}
	
	
	//initializing allocated memory
	newn->data = value;
	newn->next = NULL;  //struct node members gets initialized
	
	//logic to add node into singly linked list into first pose
	
	if(*Head == NULL) //it means our linked list is empty
	{
		//adding node to first
		*Head = newn;
	}
	else	//if it contains more than one node 
	{		//add newn to first pose 
			
			newn->next = *Head;	//adding first node address to newn 
			*Head = newn;	    //assign address of newn to *Head where First pointer gets address of newly added node
	}
}

//--------------------------------------------------------------------------------------------------------//
//InsertLast we add node at last of our linked list
void InsertLast(PPNODE Head, int value)
{
	//create node now 
	PNODE newn = NULL;	//newn is pointer of struct node *newn
	
	//memory allocate for newn 
	newn = (PNODE) malloc(sizeof(NODE)); //newn point address return by malloc function 
	
	//check memory got or not
	if(newn == NULL)
	{
		printf("Insufficient memory space\n");
		return;
	}
	
	//initialize node value
	newn->next = NULL;
	newn->data = value;	
	
	//if linked list is empty 
	if(*Head == NULL) //there is not node into linked list
	{
		*Head = newn; //adding first node to list
	}
	else
	{
		PNODE Temp = *Head;
		while(Temp->next != NULL)  //travel till last node
		{
			Temp = Temp->next;		//shift one to next node and head get address of each node
		}
				
		Temp->next = newn;	//assign newn at last
	}
}


//--------------------------------------------------------------------------------------------------------//
//insert node at perticular post into list

void InsertAtPose(PPNODE Head, int value, int pose)
{
	PNODE temp  = *Head;
	PNODE newn = NULL;
	
	int size = Count(*Head);
	int i = 0;
	
	//check position 
	if((pose < 1) || (pose > size+1))
	{
		printf("Invalid position of list\n");
		return;
	}
	
	if(pose == 1)
	{
		InsertFirst(Head, value); //call to insertFirst
	}
	else if(pose == (size+1))
	{
		InsertLast(Head, value);
	}
	else
	{	
		 //memory allcation
		newn = (PNODE)malloc(sizeof(NODE));
		
		//memory initialization
		newn->next = NULL;
		newn->data = value;
		
		for(i = 1;  i <= (pose-2); i++)
		{
			temp = temp->next;
		}
		
		newn->next = temp->next; //newn->next hold temp->next address
		temp->next = newn;		 //temp->next holds address of newn
	}
}


//--------------------------------------------------------------------------------------------------------//

//delete first node
void DeleteFirst(PPNODE Head)
{
	if(*Head == NULL)
	{
		printf("There is no node into list\n");
		return;
	}
	else
	{
		PNODE Temp = NULL;
		Temp = *Head;
		
		*Head = Temp->next;
		free(Temp);
	}
}

//--------------------------------------------------------------------------------------------------------//
//delete last node

void DeleteLast(PPNODE Head)
{
	if(*Head == NULL)
	{
		printf("There is no node into list\n");
		return;
	}
	else
	{
		PNODE Temp = NULL;				//create temporory pointer
		Temp = *Head; 					//assign first node addreess to Temp
		
		while(Temp->next->next != NULL) //checking next to next pointer is null 
		{
			Temp = Temp->next; //traverse first node to second last node
		}
		
		free(Temp->next);	//free last node
		Temp->next = NULL; //add Null value to second last node next = NULL
	}
}

//--------------------------------------------------------------------------------------------------------//
//delete node at position wise
void DeleteAtPose(PPNODE Head, int pose)
{
	PNODE Temp1 = *Head;
	PNODE Temp2 = NULL;	
	int size = Count(*Head);
	int i = 0;
	
	if(pose < 1 || pose > size)
	{
		printf("invalid position of list\n");
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
			Temp1 = Temp1->next;
		}
	
		Temp2 = Temp1->next;
		Temp1->next = Temp2->next;
		free(Temp2);		
	}
}

//--------------------------------------------------------------------------------------------------------//
//this function is used to display all data member of each node
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d",Head->data);
		Head = Head->next;
	}
	printf("|NULL|\n");
}

//--------------------------------------------------------------------------------------------------------//

//this helper function is used to return total nodes count
int Count(PNODE Head)
{
	int icnt = 0;
	
	while(Head != NULL)
	{
		icnt++;
		Head = Head->next;
	}
	
	return icnt;
}
