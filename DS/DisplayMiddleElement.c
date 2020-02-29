//accept linked list from user and return middle element 

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void Insert(PPNODE Head, int Value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->next = NULL;
	newn->data = Value;
	
	if(*Head == NULL)
	{
		*Head=newn;	
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d ",Head->data);
		
		Head = Head->next;	
	}
	printf("\n");
}

void MiddleElemnt(PNODE Head)
{
	PNODE Fast = Head, Slow=Head;
	while((Fast!=NULL) && (Fast->next != NULL))
	{
		Fast = Fast->next->next;
		Slow = Slow->next;
	}
	
	printf("Middle is %d\n",Slow->data);
}


int main()
{

 printf("Inside main\n");
 PNODE First = NULL;
 Insert(&First, 11);
 Insert(&First,21);
 Insert(&First,41);
 Insert(&First,55);
  Insert(&First,45);
 Display(First);
 MiddleElemnt(First);


 return 0;
}
