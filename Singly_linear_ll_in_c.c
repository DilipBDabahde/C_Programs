#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

 struct node
  {
     int data;
     struct node* next;  
  };
  
 typedef struct node NODE;     //its typedef of struct node
 typedef struct node *PNODE;   //struct single pointer
 typedef struct node **PPNODE; //struct double pointer to pointer neext to next identifier
 
 void InsertFirst(PPNODE,int);
 void Display(PNODE);
 int  Count(PNODE);
 void InsertLast(PPNODE,int);  //here these are function prototypes
 void DeleteLast(PPNODE);
 void DeleteFirst(PPNODE);
 void InsertAtPose(PPNODE,int,int);
 void DeleteAtPose(PPNODE,int);
 
 int main()
 {
    PNODE First=NULL;
    int iret=0;
    
    printf("---------------------------------\n");
    printf("|| Inside InsertFirst || \n");
    InsertFirst(&First,140);
    InsertFirst(&First,163);
    InsertFirst(&First,154);
    InsertFirst(&First,522);
    
    Display(First);
    printf("Total nodes %d\n",Count(First));
    printf("---------------------------------\n");
    printf("|| Inside InsertLast || \n");
    InsertLast(&First,50);
    InsertLast(&First,54);
    InsertLast(&First,59);    
    Display(First);
    printf("Total nodes %d\n",Count(First));
    
    
    printf("---------------------------------\n");
    printf("|| Inside DeleteLast || \n");     
    DeleteLast(&First);    
    Display(First);
    printf("Total nodes %d\n",Count(First)); 
     
    //deleteFirst
    printf("---------------------------------\n");
    printf("|| Inside DeleteFirst || \n");  
    DeleteFirst(&First); 
    Display(First);
    printf("Total nodes %d\n",Count(First)); 
     
    //insertatpose
    printf("---------------------------------\n");
    printf("|| Inside InsertAtPose || \n");  
    InsertAtPose(&First,5,96);  
    Display(First);
    printf("Total nodes %d\n",Count(First)); 
     
    //delete at pose
    printf("---------------------------------\n");
    printf("|| Inside InsertAtPose || \n");  
    DeleteAtPose(&First,2); 
    Display(First);
    printf("Total nodes %d\n",Count(First)); 
     
    
    return 0;
 }
 
 void InsertFirst(PPNODE Head,int value)
 {  

    PNODE newn=NULL;
    //now we created new node we need to alloate mem for this new node
    
    newn=(PNODE)malloc(sizeof(NODE));  //8bytes allcoate
    //now we have node creared with an adress so we have to fill it
    
    newn->data=value;   //this value come from main function 
    newn->next=NULL;   //now node get value and its next ptr is NULL
    
    if(*Head == NULL)
     {
       *Head=newn;  //now at begininng our linked list is empty so node will insert here first
     }
     
     else
     {
        newn->next=*Head;
        *Head=newn;     
     } 
 }
 
 void Display(PNODE Head)
 {
    printf("elements from linked list are\n");
    
    while(Head != NULL)
    { 
      printf("| %d |-> ",Head->data);
      Head=Head->next;
    }
    printf("NULL\n"); 
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
 
 
 void InsertLast(PPNODE Head,int value)
 {
 
    PNODE newn=NULL;
    PNODE Temp=*Head;  //we gave value of *head to temp  // actute *Head get value from First which survice in main()
    
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=value; //actuallly created above node is gettig  filled with value which come from main function
    newn->next=NULL;
    
    if(Temp ==NULL)
      {
        Temp=newn;
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
 
 void DeleteLast(PPNODE Head)
 {
    PNODE Temp=*Head;
    
    if(*Head==NULL)
    {
      return;
    }
    else if(Temp->next ==NULL)
    {       
         free(Temp);
         *Head=NULL;
    }
 
    else
    {
        while(Temp->next->next !=NULL)
        {
           Temp=Temp->next;        
        }
          free(Temp->next);
          Temp->next=NULL;  
    } 
 }
 
 void DeleteFirst(PPNODE Head)
 {
    PNODE Temp=*Head;
    
    (*Head)=(*Head)->next;
    free(Temp);    
 }
 
 void InsertAtPose(PPNODE Head, int pose,int value)
 {
    PNODE Temp=*Head;
    PNODE newn=NULL;
    
    int size=Count(*Head);
    
    if((pose<1)||(pose>size+1))
     {
       return;
     }
     
    if(pose==1)
    {
     InsertFirst(Head,value);
    }
    else if(pose==(size+1))
    {
      InsertLast(Head,value);    
    }
    else
    {
      newn=(PNODE)malloc(sizeof(NODE));
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
 
 void DeleteAtPose(PPNODE Head,int pose)
 {
   PNODE Temp1=*Head;
   PNODE Temp2=NULL;
   
   int i=1;
   int size=Count(*Head);
   
   if((pose<1) ||(pose>size+1))
   {
    return;
   }
   
   if(pose==1)
    {
      DeleteFirst(Head);
    }
    else if(pose==(size+1))
    {
      DeleteLast(Head);
    }
    else
    {
      for(i=1;i<(pose-2);i++)
      {
        Temp1=Temp1->next;
      }    
      
      Temp2=Temp1->next;
      Temp1->next=Temp2->next;
      free(Temp2);      
    } 
 }
