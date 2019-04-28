//insertAtPosition in linked list

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

struct node
 {
   int data;
   struct node *next;
 };
 
 typedef struct node NODE;
 typedef NODE *PNODE;
 typedef PNODE *PPNODE;
 
 void Insert(PPNODE,int);
 void Display(PNODE);
 int  Count(PNODE);
 void InsertAtPose(PPNODE,int,int);
 
 int main()
  {
    PNODE Head=NULL;
    printf("InsertedNodes\n");
    InsertAtPose(&Head,10,1);
    InsertAtPose(&Head,20,2);
    InsertAtPose(&Head,30,3);
    InsertAtPose(&Head,40,4);
    InsertAtPose(&Head,50,5);
    InsertAtPose(&Head,60,6);
    Display(Head);
    
    printf("InsertedAtPosition\n");
    InsertAtPose(&Head,300,1);    
    Display(Head);
    
  
      

  
  
   
   return 0;  
  }
  
  void InsertAtPose(PPNODE First,int value,int ipose)
  {
    PNODE Temp=NULL,Temp2=NULL,Temp3=NULL,newn=NULL;
    Temp=Temp2=*First;
    
    newn=(PNODE)malloc(sizeof(struct node));
    int icnt=Count(*First);
    
    newn->next=NULL;
    newn->data=value;
    
    if(ipose==1)
     {
       *First=newn;
     }
     else if(ipose>icnt)
     {
           while(Temp->next != NULL)
           {
            Temp=Temp->next;
           }
           Temp->next=newn;
     }
     else
     {
       for(int i=1;i<=ipose-2;i++)
        {
          Temp2=Temp2->next;
        }
        Temp3=Temp2->next->next;
        newn->next=Temp3;
        Temp2->next=newn;        
     } 
  }
  
  void Display(PNODE First)
  {
     while(First != NULL)
      {
         printf("|%d",First->data);
         First=First->next;
      }  
      printf("|NULL-->>\n");
  }
  
  
  int Count(PNODE First)
  {
    int icnt=0;
    while(First != NULL)
    {
      icnt++;
      First=First->next;
    }
    return icnt;
  } 
