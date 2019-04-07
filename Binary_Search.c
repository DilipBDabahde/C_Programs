//binary search in c

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 struct node
  {
     int data;
     struct node* Rchild;
     struct node* Lchild;  
  };
  
  typedef struct node NODE;
  typedef struct node *PNODE;
  typedef struct node **PPNODE;
 
 
 void Insert(PPNODE,int);
 BOOL Search(PNODE,int);
 int Count(PNODE);
 
 
 void Insert(PPNODE Root,int value)
 {
   
   PNODE Temp=*Root;
   PNODE newn=NULL;
   
   newn=(PNODE)malloc(sizeof(char));
   
   newn->data=value;
   newn->Rchild=NULL;
   newn->Lchild=NULL;
   
   if(*Root==NULL)
    {
      *Root=newn;
    }
    
    else
    {
       while(1)
       {
         if(value > Temp->data)
            {
              if(Temp->Rchild==NULL)
               {
                 Temp->Rchild=newn;
                 break;
               }
               Temp=Temp->Rchild;
            }
          else if(value < Temp->data)
          {
            if(Temp->Lchild==NULL)
            {
              Temp->Lchild=newn;
            }
            Temp=Temp->Lchild;
          }
          
          else
          {
            if(value==Temp->data)
             {
                free (newn);
                break;
             }
          
          }  
        }   
    }
 }
 
 BOOL Search(PNODE Root,int value)
 {
   if(Root==NULL)
   {
     return FALSE;
   }
 
   while(Root != NULL)
   {
     
      if(value==Root->data)
      {
        break;
      }
      
      else if(value > Root->data)
       {
         Root=Root->Rchild;       
       }
   	else
   	 {
   	  Root=Root->Lchild;   	 
   	 }
   }   
   if(Root==NULL)
   {
     return FALSE;
   }
   else
   {
    return TRUE;
   }
 }
 
  int Count(PNODE Root)
  {   
      static int icnt=1;
            
     if(Root != NULL)
    { 
      icnt++;
      Count(Root->Rchild);  
    //  Count(Root->Lchild);  
    }     
   
    return icnt; 
  }


 int main()
 {
  int iret=0,bret=0;
  PNODE Head=NULL;
  
  Insert(&Head,15);
  Insert(&Head,14);
  Insert(&Head,111);
  Insert(&Head,25);
  iret=Search(Head,11); 
  if(iret==TRUE)
  {
    printf("Number is availabe in three\n");
  }
  else
  {
   printf("Number is not availabe in tree\n");
  } 
  
   bret=Count(Head);
   printf("%d\n",bret);
  
 }
 
