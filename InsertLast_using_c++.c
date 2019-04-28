//inserting node at last in c++

#include<iostream>
#include<stdlib.h>
#include<malloc.h>

using namespace std;
 
 struct node
  {
    int data;
    struct node *next;  
  };
 typedef struct node NODE;
 typedef NODE *PNODE;
 typedef PNODE *PPNODE;
 
class InsertLast
 {
   public:
   
   void Insert_Last(PPNODE,int);
   void Display(PNODE	); 
 };
 
 
 
 int main()
 {
   PNODE Head=NULL;
   InsertLast obj;
   
   obj.Insert_Last(&Head,11);
   obj.Insert_Last(&Head,12);
   obj.Insert_Last(&Head,44);
   obj.Display(Head);
 
 
  return 0;
 }
 
 void InsertLast::Insert_Last(PPNODE First,int value)
 {
   PNODE newn=NULL,Temp=*First;
   
   newn=(PNODE)malloc(sizeof(NODE));
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
 
 void InsertLast::Display(PNODE First)
 {
    while(First != NULL)
    {
      cout<<"|"<<First->data;
      First=First->next;
    }
    cout<<"|NULL~~~>"<<endl;
 }
