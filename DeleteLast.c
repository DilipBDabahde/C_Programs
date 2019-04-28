//deleting last node of our linked list

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
 
 void DeleteLast(PPNODE);
 void Insert(PPNODE,int);
 void Display(PNODE);
 
 int main()
 {
    PNODE Head=NULL;
    printf("Inserted Nodes\n");
    Insert(&Head,11);
    Insert(&Head,12);
    Insert(&Head,13);
    Insert(&Head,14);
    Insert(&Head,15);
    Display(Head);
    printf("Deleted Last node\n");
    DeleteLast(&Head);
    Display(Head); 
  
 return 0;
 }
 
 void Insert(PPNODE First,int value)
 {
    PNODE newn=NULL;
 
    newn=(struct node*)malloc(sizeof(struct node));
     
    newn->data=value;
    newn->next=NULL;
     
    if(*First==NULL)
    {
      *First=newn;
    }
    else
    {
       newn->next=*First;
       *First=newn;
    }
 }
 
 void DeleteLast(PPNODE First)
  {
    PNODE Temp1=*First;
    
    if(*First==NULL)
    {
     return;
    }
    else if(Temp1->next == NULL)
    {  
        free(Temp1);
        *First=NULL; 
    }
    else
    {
       while(Temp1->next->next != NULL)
       {
           Temp1=Temp1->next;
       }
              
       free(Temp1->next);
       Temp1->next=NULL;
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
