//accept two linked list from user and make revese of them and after reverse of both linked list make their addition
//
//	1 3 5  =135    531
//      7 5 9  =759    957 
//                             = 1488


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
 
  void LL1(PPNODE Head,int value);
  void LL2(PPNODE Head,int value);
  int Dis1(PNODE Head);
  int Dis2(PNODE  Head);
  int reverse(int);
  
 
 int main()
  {
    PNODE First=NULL;
    PNODE First1=NULL;
    
    printf("|| Frist Linked list || \n");
    LL1(&First,1);
    LL1(&First,3);
    LL1(&First,2);
    int val=Dis1(First);
    printf("Before Reverse =%d\n",val);    
    int iret=reverse(val);
    printf("After reverse = %d\n",iret);
    
    printf("|| Second Linked list || \n");
    LL2(&First1,4);
    LL2(&First1,1);
    LL2(&First1,3);
    int idigit=Dis2(First1);
    printf("\nBefore Reverse =%d\n",idigit);    
    int ret=reverse(idigit);
    printf("After reverse = %d\n",ret);    
    printf("Addition of both linked list in reverse format %d\n",iret+ret);
       
  }
  
  void LL1(PPNODE Head,int value)
  {
    PNODE newn=NULL;
    PNODE temp=*Head;
    
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=value;
    newn->next=NULL;
    
    if(*Head==NULL)
     {
       *Head=newn;
     }
     else
     {
       while(temp->next!= NULL)
       {
         temp=temp->next;
       }
       temp->next=newn;
     }
  }
 
  int reverse(int val) 
  {
    int iret=0,idigit=0;
    while(val != 0)
    {
        idigit=val%10;
        iret=iret*10+idigit;
        val=val/10;
    }
   return iret;
  }
   
  
  int Dis1(PNODE Head)
   {
     PNODE Temp=Head;
     int iret=0,idigit=0;
     while(Head != NULL)
     {
       printf("| %d ",Head->data);
       Head=Head->next;
     }
     printf("|--> NULL\n");
   
    while(Temp != NULL)
    {
        idigit=Temp->data%10;
        iret=iret*10+idigit;
        Temp=Temp->next;    
    }
       return iret; 
   }
  
  void LL2(PPNODE Head,int value)
  {
    PNODE temp=*Head;
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
        while(temp->next != NULL)
       {
          temp=temp->next;       
       }
       temp->next=newn;   
     } 
  }
  
  int Dis2(PNODE Head)
  {
     PNODE Temp=Head;
     int iret=0,idigit=0;
     while(Head != NULL)
     {
       printf("| %d ",Head->data);
       Head=Head->next;
     }
     
     while(Temp != NULL)
     {
        idigit=Temp->data%10;
        iret=iret*10+idigit;
        Temp=Temp->next;    
     }
      return iret;  
  }
