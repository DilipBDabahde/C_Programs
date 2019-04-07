//doubly linear link list

// in this linked list we can travers forward as well as backbard ex 1 2 3 4 5 | 5 4 3 2 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct node
 {
    int data;
    struct node* next;
    struct node* prev;
 };

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE,int);  
void DisplayFirst(PNODE);
void InsertLast(PPNODE,int);
void DisplaySec(PNODE);
int  Count(PNODE);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void InsertAtPose(PPNODE,int,int);
void DeleteAtPose(PPNODE,int);

int main()  /////////////////////////////////////  1   ///////////////////////////////////////////////////////// 
{
  PNODE First=NULL;
  int iret=0;

  printf("\ninserting First\n");
  InsertFirst(&First,51);
  InsertFirst(&First,21);
  InsertFirst(&First,11);
  
  DisplayFirst(First);
  DisplaySec(First);  
  
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);
  
  printf("\ninserting Last\n");
  InsertLast(&First,101);   
  InsertLast(&First,255);
    
  DisplayFirst(First);
  DisplaySec(First);  
  
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);
  
  printf("\nDeleting First\n");
  DeleteFirst(&First);
  DisplayFirst(First);
  DisplaySec(First);  
  
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);
  
  printf("\nDeleting last\n");
  DeleteLast(&First);
  DisplayFirst(First);
  DisplaySec(First);
   
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);
  
  printf("\nInserting atPose\n");
  InsertAtPose(&First,124,2);
  DisplayFirst(First);
  DisplaySec(First);
  
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);

  printf("\nDeleting atPosition\n");
  DeleteAtPose(&First,3);
  DisplayFirst(First);
  DisplaySec(First);
  
  iret=Count(First);
  printf("\ntotal nums-->>%d\n",iret);

 return 0;
}

void InsertFirst(PPNODE Head,int value)  //function definition  //////////////////////////////////////////////
{
  
   PNODE newn=NULL;  //newn is created
   //memory allocation for newn 
   
   newn=(PNODE)malloc(sizeof(NODE));  //12 bytes allocatited for each node for--->> data,next,prev
   
   newn->data=value;
   newn->next=NULL;
   newn->prev=NULL;
   
   if(*Head==NULL)
   {
     *Head=newn;
   }
   else
   {
     newn->next=*Head;
     (*Head)->prev=newn;
     *Head=newn;
   }
}



void DisplayFirst(PNODE Head)  ///////////////////////////////////////////////////////////////////////////////////////
{
 
   while(Head != NULL)
   {
      printf("%d ",Head->data);
      Head=Head->next;
   }
}

int Count(PNODE Head)  ////////////////////////////////////////////////////////////////////////////////////////////
{
    int icnt=0;
   while(Head != NULL)
   {
     icnt++;
     Head=Head->next;
   }
   return icnt;
}


void DisplaySec(PNODE Head) ////////////////////////////////////////////////////////////////////////////////////
{
   
   if(Head==NULL)
   {
     return;
   }
   
   while(Head->next !=NULL)
   {
      Head=Head->next;
   }
   while(Head != NULL)
  {
    printf("%d ",Head->data);
    Head=Head->prev;
  } printf("\n");
}


void InsertLast(PPNODE Head,int value) ////////////////////////////////////////////////////////////////////////
{


  PNODE temp=*Head;
  PNODE newn=NULL;
  
  newn=(PNODE)malloc(sizeof(NODE));
  
  newn->data=value;
  newn->next=NULL;
  newn->prev=NULL;
 
  if(*Head == NULL) 
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
    newn->prev=temp;
  }
}

void DeleteFirst(PPNODE Head)        //////////////////////////////////////////////////////////////////////////////
{

   if(*Head==NULL)
    {
      return;
    }
    else if((*Head)->next==NULL)
    {
       free(*Head);
       *Head=NULL;
    }
    else
    {
       (*Head)=(*Head)->next;
       free((*Head)->prev);
       (*Head)->prev=NULL;
    }
}

void DeleteLast(PPNODE Head)
{
   PNODE temp=*Head;
   if(*Head==NULL)
  {
    return;
  }
  
  else if((*Head)->next==NULL)
  {
     free(*Head);
     *Head=NULL;
  }
  else
  {
       while(temp->next !=NULL)
       {
         temp=temp->next;
       }
       
       temp->prev->next=NULL;
       free(temp);
  }
}

void InsertAtPose(PPNODE Head,int value,int ipose)
{

  int isize=Count(*Head);
  int i=0;
  
  PNODE newn=NULL,temp=*Head;
  
  if((ipose<1)||(ipose>isize+1))
  {
    return;
  }
  
  if(ipose==1)
  {
    InsertFirst(Head,value);  
  }
  else if(ipose==isize+1)
  {
    InsertLast(Head,value);
  }
  else
  {
    newn=(PNODE)malloc(sizeof(NODE));
    				//   _______________
    newn->data=value;   //   |   |	  |	 |   
    newn->next=NULL;    //   |N  | 17 | N	 | 	
    newn->prev=NULL;    //   |___|____|____|
      	           //    NULL data NULL
    
    for(i=1;i<=isize-2;i++)
     {
       temp=temp->next;
     }
    
      newn->next=temp->next;
      newn->next->prev=newn;
      temp->next=newn;
      newn->prev=temp; 
  }
}


void DeleteAtPose(PPNODE Head,int ipose)
{
  PNODE temp=*Head;
  int i=0;
  int isize=Count(*Head);

  if((ipose<1)||(ipose>isize))
  {
    return;
  }
  
  if(ipose==1)
  {
    DeleteFirst(Head);
  }
  else if(ipose==isize)
  {
    DeleteLast(Head);
  }
  else
  {
    for(i=1;i<=(ipose-2);i++)
    {
      temp=temp->next;
    }
    
    temp->next=temp->next->next;
    free(temp->next->prev);
    temp->next->prev=temp;
  }
}

