#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct node
{
   int data;
   struct node *next;  //ptr
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE,int);
void Display(PNODE);
int Count(PNODE);
void InsertLast(PPNODE,int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void InsertAtPose(PPNODE,int,int);
void DeleteAtPose(PPNODE,int);



int main() /////////////////////////////////////////////////////////////////
{  
    PNODE First=NULL;
    
    int ret=0;
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,77);
    InsertFirst(&First,05);
 
    Display(First);
    ret=Count(First);
    printf("no of elemts are %d\n",ret);
    
    InsertLast(&First,200);
    InsertLast(&First,212);
    Display(First);
    
    DeleteFirst(&First);
    Display(First);
    
    DeleteLast(&First);    
    Display(First);
    
    InsertAtPose(&First,28,2);    
    Display(First);
    
    DeleteAtPose(&First,3);
    Display(First);
    
 return 0;
}

void InsertFirst(PPNODE Head,int value)  ///////////////////////////////////////////////
{
   PNODE newn=NULL;
   
   newn=(PNODE)malloc(sizeof(NODE));
   newn->data=value;
   newn->next=NULL;
 
   if(*Head==NULL)
   {
      *Head=newn;
   }
   else
   {
     newn->next=*Head;
     *Head=newn;
   }

}

void Display(PNODE Head)  //////////////////////////////////////////////////////////////////////////
{
   printf("elemtns from linked list are:\n");
   
    while(Head != NULL)
    {
       printf("| %d |-->>",Head->data);
       Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)  ////////////////////////////////////////////////////////////////////////////
{
    int icnt=0;
    while(Head != NULL)
   {
     icnt++;
     Head=Head->next;
   }
   return icnt;
}

void InsertLast(PPNODE Head,int value) /////////////////////////////////////////////////////////////////
{
   PNODE newn=NULL;
   PNODE temp=*Head;

   newn=(PNODE)malloc(sizeof(NODE));  //8bytes allocated
   
   newn->data=value;
   newn->next=NULL;
   
   if(*Head==NULL)
   {
      *Head=newn;
   }
   else
   {
     while(temp->next != NULL)
     {
       temp=temp->next;
     }
     temp->next=newn;
   }
} 

void DeleteFirst(PPNODE Head) ////////////////////////////////////////////////////////////////////////////
{
   PNODE temp=*Head;
	
   if(*Head==NULL)	
   {
     return ;
   }
   else
   {
     (*Head)=(*Head)->next;
     free(temp);
   }
}

void DeleteLast(PPNODE Head) /////////////////////////////////////////////////////////
{
   PNODE temp=*Head;
   
   if(*Head==NULL)
    {
       return;
    }
    else if((*Head)->next ==NULL)
    {
      free(temp);
      *Head=NULL;
    }
    else
    {
      while(temp->next->next != NULL)
	{
	 temp=temp->next;
	}
	 free(temp->next);
	 temp->next=NULL;
    }
}

void InsertAtPose(PPNODE Head,int value,int ipose)//19 2 ///////////////////////////////////////////////////////////////
{
   PNODE temp=*Head;
   PNODE newn=NULL;
   int size=Count(*Head);
   int i=0;
   if((ipose<1)||(ipose>size+1))
   {
     return;
   }
  if(ipose==1)
   {
     InsertFirst(Head,value);
   }   
   else if(ipose==(size+1))
   {
     InsertLast(Head,value);
   }
   else
   {
      newn=(PNODE)malloc(sizeof(NODE));
      newn->data=value;
      newn->next=NULL;
      
      for(i=1;i<=(ipose-2);i++)
      {
        temp=temp->next;
      }
      newn->next=temp->next;
      temp->next=newn;
   } 
} 

void DeleteAtPose(PPNODE Head,int ipose)
{
    PNODE temp1=*Head;
    PNODE temp2=NULL;
    int i=0;
    int size=Count(*Head);

    if((ipose<1)||(ipose>size))
    {
      return;
    }
    
    if(ipose==1)
    {
      DeleteFirst(Head);
    }
    else if(ipose==size)
     {
       DeleteLast(Head);
     }
     else
     {
       for(i=0;i<=(ipose-3);i++)
       {
         temp1=temp1->next;
       }
       
       temp2=temp1->next;
       temp1->next=temp2->next;
       free(temp2);
     }
}
