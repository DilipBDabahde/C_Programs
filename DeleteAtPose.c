//accept nodes from user and delete not at that position

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
 void DeleteAtPosition(PPNODE,int);
 
 int main()
 {
   PNODE Head=NULL;
   Insert(&Head,11);
   Insert(&Head,21);
   Insert(&Head,31);
   Insert(&Head,41);
   Insert(&Head,51);
   Display(Head);
   printf("Tatal Nodes are %d\n",Count(Head));
  
   DeleteAtPosition(&Head,5);
   Display(Head);
   
   DeleteAtPosition(&Head,1);
   Display(Head);
   
 
 return 0;
 }
 
 
 void DeleteAtPosition(PPNODE First,int Pose)
  {
   
   PNODE T1=*First,T2=*First;
   int icnt=Count(*First);
   
  
   if(Pose == 1)  	// to free first node
   {
     *First=T1->next;
     free(T1); 
     T1=*First;   
   }
   else if(Pose==icnt)   //to free last node
   {
      while(T1->next->next != NULL)
      {
       T1=T1->next;
      }
      
      free(T1->next);
      T1->next=NULL;
      T1=*First;
   }
   else
    {
        for(int i=1;i<=Pose-2;i++)
       {
         T1=T1->next;       
       }
       T2=T1->next->next;
       free(T1->next);
       T1->next=T2;
    } 
  }
 
 
 
 void Insert(PPNODE First,int value)
 { 
   PNODE newn=NULL;
   
   newn=(PNODE)malloc(sizeof(struct node));
   newn->data=value;
   newn->next=NULL;
   
    newn->next=*First;
    *First=newn; 
 }
 
 void Display(PNODE First)
  {
    while(First)
    {
      printf("|%d",First->data);
      First=First->next;
    }
    printf("|NULL~~>\n");
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
