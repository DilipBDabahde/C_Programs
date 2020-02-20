//stack implementtion using c

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE,**PPNODE;


void Push(PPNODE Head, int value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = value;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}


void Display(PNODE Head)
{
	PNODE Temp = Head;
	printf("|NULL|");
	while(Temp != NULL)
	{
		printf("<-|%d|",Temp->data);
		Temp = Temp->next;
	}
	printf("\n");
}

int Count(PNODE Head)
{
	PNODE Temp = Head;
	int icnt =	 0;
	while(Temp != NULL)
	{
		icnt++;
		Temp = Temp->next;
	}
	return icnt;
}

void Pop(PPNODE Head)
{	
	printf("Inside Pop\n");
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head  = NULL;
	}
	else
	{
		PNODE Temp1 = *Head;
		*Head = (*Head)->next;
		free(Temp1);	
	}
}


int main()
{
	PNODE First = NULL;
	
	Push(&First,11);
	Push(&First,32);
	Display(First);
	printf("%d\n",Count(First));
	
	Push(&First,111);
	Push(&First,222);
	Display(First);
	printf("%d\n",Count(First));
	
	Pop(&First);
	Display(First);
	printf("%d\n",Count(First));
	
	Push(&First,100);
	Display(First);
	printf("%d\n",Count(First));
	
	Pop(&First);
	Pop(&First);
	Display(First);
	printf("%d\n",Count(First));

	

 return 0;
}

