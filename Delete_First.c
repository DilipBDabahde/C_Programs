//delete first node from linked list

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
 {
   int data;
   struct node *next; 
 };
 
 typedef struct node NODE;
 typedef NODE *PNODE;
 typedef PNODE *PPNODE;
 
 void DeleteFirst(PPNODE);
 void Insert(PPNODE,int);
 void Display(PNODE);
 
 int main()
  {
     PNODE Head=NULL;
     
     printf("Inserted Nodes\n");
     Insert(&Head,13);
     Insert(&Head,12);
     Insert(&Head,11);
     Insert(&Head,6);
     Display(Head);
     printf("Delete First\n");
     DeleteFirst(&Head);
     Display(Head); 
  
  return 0;
  }
  
  void Insert(PPNODE First,int value)
  {
    PNODE newn=NULL;
    PNODE Temp=*First;
    
    newn=(PNODE)malloc(sizeof(NODE));  //newn gets address where mem of struct gets alllocated
    
    newn->data=value;
    newn->next=NULL;
    if(*First != NULL)
    {
     while(Temp->next != NULL)
       {
        Temp=Temp->next;
       }
       Temp->next=newn;
    }
    else
    {
       *First=newn;
    }
  }  
  
  void DeleteFirst(PPNODE First)
   {
      PNODE Temp=*First;
      
      if(*First != NULL)
       {
        *First=Temp->next;
         free(Temp);
       }
   }
   
   void Display(PNODE First)
   {
      while(First != NULL)
      {
        printf("|%d",First->data);
        First=First->next;
      }
      printf("|NULL-->\n");
   }
