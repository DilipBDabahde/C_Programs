//static stack implementation usign arrayy

#include<stdio.h>
#include<stdlib.h>

int size = 0;
int top = -1;
int  *ptr = NULL;
int Counter = 0;

void array(int isize)
{
	ptr = (int*)malloc(sizeof(isize));
}


void Push(int value)
{

	if((size-1) == top)
	{
		return;
	}
	else
	{
		top++;
		ptr[top] = value;
		Counter++;
	}
}

void Display()
{
  printf("Total elements are: \n");
  for(int i = 0; i < Counter; i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");
}

void Pop()
{
	if(top == -1)
	{
		printf("Stack is empty");
		return;
	}
	else
	{
		printf("Popped : %d\n",ptr[top]);
		top--;
		Counter--;
	}
}

int main()
{
	int isize = 0;
	printf("Enter stack size: ");
	scanf("%d",&isize);
	
	size = isize;
	array(isize);
	
	Push(11);
	Push(22);
	Push(33);
	Push(44);
	Display();
	
	printf("After pop:\n");
	Pop();
	Display();

 
 return 0;
}
