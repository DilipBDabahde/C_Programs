/*
1.Implement Doubly Circular linked list in C?
*/

#include<stdio.h>	//required Header files includes
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

///////////////////////////////////////// Structure Declared & used typedef  ////////////////////////////////////////////
typedef struct node
 {
   int data;
   struct node *next;
   struct node *prev; 
 }NODE,*PNODE,**PPNODE;			//inline typedef
 			 
////////////////////////////////// Function prototypes declared ////////////////////////////////////////////////////////
int  Count(PNODE,PNODE);
void Display(PNODE,PNODE);
void InsertFirst(PPNODE,PPNODE,int);
void InsertLast(PPNODE,PPNODE,int);
void InsertAtPos(PPNODE,PPNODE,int,int);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void DeleteAtPos(PPNODE,PPNODE,int);



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void InsertFirst(PPNODE First,PPNODE Last,int iNo)
 {
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=iNo;
  
   	
    if(*First==NULL && *Last==NULL)
     {
       *First=newn;
       *Last=newn;
       (*Last)->next=newn;
       (*First)->prev=newn;
     }
     else
     {
       newn->next=*First;
       (*First)->prev=newn;
       *First=newn;
       (*Last)->next=*First;
       (*First)->prev=(*Last)->next;	     
     }    
 }
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 void Display(PNODE First,PNODE Last)
 {
      
    if(First==NULL && Last==NULL)
     {
      return;
     }
    
    do{
       printf("|%d",First->data);

      First=First->next;
     }while(First != Last->next);
     printf("|-->>NULL\n");
 }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 int Count(PNODE First,PNODE Last)
 {
    int icnt=0;
    
    if(First==NULL && Last==NULL)
     {
      return 0;
     }
    
   do
   {
     icnt++;
     First=First->next;   
   }while(First != Last->next);
   return icnt;
 }
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 void InsertLast(PPNODE First,PPNODE Last,int iNo) 
  {  
    PNODE newn=(PNODE)malloc(sizeof(NODE)),temp=NULL;
    
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;
  
    if(*First==NULL && *Last==NULL)
    {
      *First=newn;
      *Last=newn;
      (*First)->next=newn;
      (*Last)->next=newn;   
    }
    else
    { 
 	(*Last)->next=newn;
 	newn->prev=*Last;
 	*Last=newn;  	
        (*Last)->next=*First;
        (*First)->prev=*Last;            
    } 
     
  }
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 void InsertAtPose(PPNODE First,PPNODE Last,int iNo,int Pose)
 {
   PNODE newn=NULL,Temp=*First;
   
   int icnt=Count(*First,*Last);
   
   if(Pose<1 || Pose>icnt+1)
   {
    return;
   }
   
   if(Pose==1)
    {
     InsertFirst(First,Last,iNo);
    }
    else if(Pose==icnt+1)
    {
     InsertLast(First,Last,iNo);
    }
    else
    {
      newn=(PNODE)malloc(sizeof(NODE));
      newn->next=NULL;
      newn->prev=NULL;
      newn->data=iNo;
      
      for(int i=0;i<Pose-2;i++)
       {
        Temp=Temp->next;
       }
       
       newn->next=Temp->next;
       newn->next->prev=newn;
       Temp->next=newn;
       newn->prev=Temp;      
    }
 }
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 void DeleteFirst(PPNODE First,PPNODE Last) 
  {
    if(First==NULL || Last==NULL)
    {
     return;
    }
    
    if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
       *First=(*First)->next;
       free((*Last)->next);
       (*Last)->next=*First;
       (*First)->prev=*Last;    
    }
  
  }

 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 void DeleteLast(PPNODE First,PPNODE Last)
 {
    
    if(First==NULL || Last==NULL)
    {
     return;
    }
    
    if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {      
      *Last=(*Last)->prev;
      free((*First)->prev);
      (*Last)->next=*First;
      (*First)->prev=*Last;
    } 
 }
 
 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 void DeleteAtPose(PPNODE First,PPNODE Last,int Pose)
 {
    
     int icnt=Count(*First,*Last);
     
     
     if(Pose<1 || Pose>icnt+1 || *First==NULL || *Last== NULL)
     {
       return;
     }
     
     if(Pose==1)
      {
       	DeleteFirst(First,Last);
      }
     else if(Pose==icnt) 
     {
        DeleteLast(First,Last);
     }
     else
     {
       PNODE Temp1=*First,Temp2=NULL;
       for(int i=0;i<Pose-2;i++)
        {        
         Temp1=Temp1->next;       
        }
     
        Temp2=Temp1->next;
        
        Temp1->next=Temp2->next;
        Temp2->next->prev=Temp1;
        free(Temp2);        
     
     
     }
 
 
 }
 
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
 {
 
  PNODE Head=NULL,Tail=NULL;
  
  printf("--------------------------------------\n");
  printf("InsertFirst\n");
  InsertFirst(&Head,&Tail,5);
  InsertFirst(&Head,&Tail,15);
  InsertFirst(&Head,&Tail,25);
  InsertFirst(&Head,&Tail,35);		
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail));  
  printf("--------------------------------------\n");
  
  printf("InsertedLast\n");
  InsertLast(&Head,&Tail,45);
  InsertLast(&Head,&Tail,55);
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail));  
  printf("--------------------------------------\n");
  
  printf("InsertAtPose\n");
  InsertAtPose(&Head,&Tail,65,4);
  InsertAtPose(&Head,&Tail,6,6);
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail));  
  printf("--------------------------------------\n");
  
  printf("Delete First\n");
  DeleteFirst(&Head,&Tail);
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail)); 
  printf("--------------------------------------\n");
  
  printf("DeleteLast\n");
  DeleteLast(&Head,&Tail);
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail));  
  printf("--------------------------------------\n");
  
  
  printf("DeleteAtPose\n");
  DeleteAtPose(&Head,&Tail,1);
  Display(Head,Tail);
  printf("Total Nodes are -> %d\n",Count(Head,Tail));  
  printf("--------------------------------------\n"); 
  
  return 0;
 }

