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
 void InsertFirst(PPNODE,int);
 void Display(PNODE);
 int Addition(PNODE);
 int EvenNodes(PNODE);
 int InsertAtPosition(PPNODE,int,int);
 int Count(PNODE);
 
 int main()
 {
 
   PNODE First=NULL;

   InsertFirst(&First,44);
   InsertLast(&First,11);
   InsertLast(&First,21);
   InsertLast(&First,50);
   InsertLast(&First,111);
   InsertAtPosition(&First,2222,4);
   Count(First);      
   Display(First);
   printf("\n");
   Addition(First); 
   EvenNodes(First);
  
 
  return 0;
 }
 
 void InsertLast(PPNODE Head,int value)
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
    int icnt=0;
           
    while(Head != NULL)
    {  icnt++;
       printf("| %d ",Head->data);
       Head=Head->next;
    }  
    printf("|->NULL\n");
    printf("Total Nodes are=%d",icnt);
  }
  
 int Addition(PNODE Head) 
 {
    int Total=0;
    
    while(Head != NULL)
    {
        Total+=Head->data;
        Head=Head->next;
    }
    printf("Total of all nodes is:%d\n",Total); 
 }
 
 int EvenNodes(PNODE Head)
 {
    printf("All Even nodes:");
     while(Head != NULL)
     {
        if(Head->data %2==0)
        {
          printf("|%d ",Head->data);
        }
        Head=Head->next;
     }
     printf("|\n");
}

 void InsertFirst(PPNODE Head,int value)
  {
    PNODE Temp=*Head;
    PNODE newn=NULL;
    
    newn=(PNODE)malloc(sizeof(NODE));
    
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
            newn->next=Temp->next;
            Temp->next=newn;         
         }
    }
 }   
 
 int Count(PNODE Head)
 {
     int icnt=0;
     
     while(Head != NULL)
     {
        icnt++;
        Head=Head->next;     
     }
     return icnt; 
 } 
 
 
 int InsertAtPosition(PPNODE Head,int value,int pose)
  {
  
      PNODE Temp=*Head;
      PNODE newn=NULL;
      
      
      int ret=Count(*Head);
      
     
      
      if(*Head==NULL)
      {
        *Head=newn;
      }
      
      else if(pose==1)
      {
          InsertFirst(Head,value);      
      }
      else if(pose==(ret+1))
      {
        InsertLast(Head,value);
      }
      else
      {
      
				  newn=(PNODE)malloc(sizeof(char));
			 
				  newn->data=value;
				  newn->next=NULL;
           
          for(int i=1;i<(pose-2);i++)
       				{
       				 Temp=Temp->next;       				
       				}
       				
       				newn->next=Temp->next;
       				Temp->next=newn;      
      }  
  }
