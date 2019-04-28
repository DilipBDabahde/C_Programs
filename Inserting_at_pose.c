//accept nodes from user and insert a node at particular position at which user wants

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
 
 
 void Insert(PPNODE,int);
 void Display(PNODE);
 int Count(PNODE);
 void InsertAtPose(PPNODE,int,int);
 
 int main()
  {
    struct node *Head=NULL;
    
    printf("Inserting some nodes to get us idea h m nodes in list\n\n\n");
    
    Insert(&Head,11);
    Insert(&Head,21);
    Insert(&Head,51);
    Insert(&Head,101);
    Insert(&Head,121); 
    Display(Head);
    printf("Total nodes %d\n\n\n",Count(Head));
    
    InsertAtPose(&Head,151,5);
    Display(Head);
    printf("Total nodes %d\n\n\n",Count(Head));
    
    InsertAtPose(&Head,151,2);
    Display(Head);
    printf("Total nodes %d\n\n\n",Count(Head));
  
    
    InsertAtPose(&Head,151,3);
    Display(Head);
    printf("Total nodes %d\n\n\n",Count(Head));
  return 0;
  }
  
  
  void InsertAtPose(PPNODE First,int value,int Pose)
  {
    PNODE newn=NULL;
    PNODE T1=NULL,T2=NULL;
    T1=T2=*First;
   
    int icnt=Count(*First);
    
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=value;
    newn->next=NULL;
    
    if(Pose == 1)
    {
       T1=T1->next;
       newn->next=T1;
       *First=newn;
       free(T1);		
       T1=*First;
    }
    else if(Pose==icnt)
    {
       while(T2->next != NULL)
       {
         T2=T2->next;
       }
       newn->next=T2->next;
       T2->next=NULL;      
       T2->next=newn;  
       T2=*First;    
    }
    else
    {
        for(int i=1;i<=Pose-2;i++)
        {
          T2=T2->next;       
        }
        
        newn->next=T2->next->next;
        free(T2->next);
        T2->next=newn;  
    
    }  
   
  } 
  
  
  void Insert(PPNODE First,int value)  ///in this fucntion we have to insert nodes in sequecne 
  {
    PNODE Temp=*First;   
    PNODE newn=NULL;
    newn=(struct node*)malloc(sizeof(struct node));
    
    newn->data=value;
    newn->next=NULL;
    
    if(*First==NULL)
    {
      *First=newn;
    }
    else if(Temp->next==NULL)
    {
        Temp->next=newn;
        Temp=*First;
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
  
  int Count(PNODE First)
  {
    int icnt=0;
    while(First != NULL)
    {
      First=First->next;
      icnt++;
    }
    return icnt;  
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
