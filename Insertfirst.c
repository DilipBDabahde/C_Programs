//singly linked list simple insertfirst node

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

 struct node 
  {
    int data;
    struct node *next;
  };
  
 typedef struct node NODE;
 typedef NODE *PNODE;
 typedef PNODE *PPNODE;
 
 void InsertFirst(PPNODE,int);
 void Display(PNODE);
 
 
 int main()
 {
  
  PNODE Head=NULL;
  
  InsertFirst(&Head,51);
  InsertFirst(&Head,21);
  InsertFirst(&Head,11);
  Display(Head);
  
  return 0;
  
 }
 
 
 void InsertFirst(PPNODE First,int iNo)
 {
   PNODE newn=NULL;  //new node created for struct frame
   int i=0;	
   newn=(PNODE)malloc(sizeof(NODE));   //struct size memory gets allocated on heap
   
   newn->data=iNo;
   newn->next=NULL;
   
   newn->next=*First;
   *First=newn;
 //  printf("%d ",i++);
  
 }
 
 void Display(PNODE First)
  {  
       int i=0;
      
      while(First != 0)
      { 
        
        printf("| %d ",First->data);
        First=First->next;
        i++;
      }
      printf("|NULL-->>\nTotal Nodes are %d\n",i);
  }
 
 
