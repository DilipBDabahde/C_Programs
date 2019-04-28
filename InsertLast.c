//inserting nade at lastst
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
 {
   int data;
   struct node *next;
 };
 
 typedef struct node NODE;
 typedef struct node *PNODE;
 typedef struct node **PPNODE;
 
 void InsertLast(PPNODE,int);
 void Display();
 
 int main()
 {
   PNODE Head=NULL;
   InsertLast(&Head,44);
   InsertLast(&Head,11);
   InsertLast(&Head,55);
   Display(Head);
   
   
   return 0;
 }
 
 void InsertLast(PPNODE First, int value)
  {
    PNODE newn=NULL;
    PNODE Temp=*First;
    newn=(struct node*)malloc(sizeof(struct node));
    newn->data=value;
    newn->next=NULL;
    if(*First==NULL)
    {
     *First=newn;
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
 
 void Display(PNODE First)
 {
   while(First != NULL)
   {
     printf("|%d",First->data);
     First=First->next;
   }
   printf("|NULL--->\n");
 }
