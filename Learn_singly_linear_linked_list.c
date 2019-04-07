//singly linear linked list
/*
    1: InsertFirst()
    2: InsertLast();
    3: DeleteFirst();
    4: DeleteLast();
    5: InsertAtPosition();
    6: DeleteAtPosition();    
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

 struct node
 {
   int data;
   struct node* next;
 
 };
 
  typedef struct node NODE;
  typedef struct node *PNODE;
  typedef struct node **PPNODE;
  
  void InsertFirst(PPNODE,int);
  void InsertLast(PPNODE,int);
  void Display(PNODE);
  int Count(PNODE);
  
  
  int main()
  {
    PNODE First=NULL;
    
 //   InsertFirst(&First,11);
 //   InsertFirst(&First,21);
 //   InsertFirst(&First,32);
 //   Display(First);
    printf("\n");
    InsertLast(&First,51);
    Display(First);
    
    
   printf("\n");
   return 0; 
  }
  
  
/*  void InsertFirst(PPNODE Head,int value)
  {
     PNODE Temp=*Head;
     PNODE Newn=NULL;
     
     Newn=(PNODE)malloc(sizeof(NODE)); //8bytes
     Newn->data=value;
     Newn->next=NULL;
     
     if(*Head==NULL)
     {
       *Head=Newn;
     }
     else
     {
             Newn->next=*Head;
            *Head=Newn;
     } 
  }
  */
  void InsertLast(PPNODE Head,int value)
  {
    PNODE Temp=*Head;
    PNODE newn=NULL;
    
   newn=(PNODE)malloc(sizeof(NODE));
   
   if(*Head==NULL)
    {
      *Head=newn;
    }
    
    else
    {
      while(Temp->next != NULL)
      {
         Temp=Temp->next;
      }
      
      Temp->next=newn;
    }  
  }


  
  void Display(PNODE Head)
  {
     PNODE Temp=Head;
     while(Temp != NULL)
    {
      printf("%d ",Temp->data);
      Temp=Temp->next;
    }
  }
  
