//accept some nodes from user and show total nodes and their addition

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node
 {
   int data;
   struct node *next;
 };
 
 typedef struct node NODE;
 typedef struct node *PNODE;
 typedef struct node **PPNODE;
 
 void InsertLast(PPNODE,int);
 void Display(PNODE);
 int Addition(PNODE);
 
 int main()
 {
 
   PNODE First=NULL;
   
   InsertLast(&First,11);
   InsertLast(&First,21);
   Display(First);
   Addition(First); 
 
  return 0;
 }
 
 void InsertFirst(PPNODE Head,int value)
 {
    PNODE newn=NULL;
    PNODE Temp=*Head;
    
    newn=(PNODE)malloc(sizeof(NODE));
    if(newn==NULL)
    {
     return;
    }
    
    newn->data=value;
    newn->next=NULL;
    
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
       
    while(Head != NULL)
    {
       printf("%d |",Head->data);
    }
  
  
  }
