//circular linked list

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
 {
  int data;
  struct node *next; 
 }NODE,*PNODE,**PPNODE;  //inline typedef
 
 
 void InsertFirst(PPNODE,PPNODE,int);
 void InsertLast(PPNODE,PPNODE,int);
 void InsertAtPose(PPNODE,PPNODE,int,int);
 void DeleteFirst(PPNODE,PPNODE);
 void DeleteLast(PPNODE,PPNODE);
 void DeleteAtPose(PPNODE,PPNODE,int);
 void Display(PNODE,PNODE);
 int Count(PNODE,PNODE);
 
 
 int main()
  {
    PNODE Head=NULL;
    PNODE Tail=NULL;
    printf("-------------------------------------\n");
    printf("InsertFirst\n");
    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);
    printf("\n");
       
    printf("-------------------------------------\n");
    printf("Inserted last\n");
    InsertLast(&Head,&Tail,101);
    Display(Head,Tail);
    printf("\n");    
    printf("Total nodes %d\n",Count(Head,Tail));
    
    printf("-------------------------------------\n");
    printf("InsertAtPose\n");
    InsertAtPose(&Head,&Tail,34,3);
    InsertAtPose(&Head,&Tail,52,1);
    InsertAtPose(&Head,&Tail,11,6);
    Display(Head,Tail);       
    printf("\nTotal nodes %d\n",Count(Head,Tail));    
    printf("-------------------------------------\n");
    
    printf("DeleteFirst\n");
    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    printf("\nTotal nodes %d",Count(Head,Tail));   
    printf("\n-------------------------------------\n");
    
    printf("DeleteLast\n");
    DeleteLast(&Head,&Tail);    
    DeleteLast(&Head,&Tail);
    InsertAtPose(&Head,&Tail,64,3);  //here we inserted two more nodes 
    InsertAtPose(&Head,&Tail,32,1);
    Display(Head,Tail);    
    printf("\nTotal nodes %d",Count(Head,Tail));   
    printf("\n-------------------------------------\n");
    
    printf("DeleteAtPose\n");
    DeleteAtPose(&Head,&Tail,5);
    Display(Head,Tail);    
    printf("\nTotal nodes %d\n",Count(Head,Tail));   
    printf("\n");
  
  return 0;
  }
  
  
   void InsertFirst(PPNODE First,PPNODE Last,int value)
   {
     PNODE newn=NULL;
     newn=(PNODE)malloc(sizeof(NODE));
     
     newn->data=value;
     newn->next=NULL;
   
     if(*First==NULL && *Last==NULL) 
       {
          *First=newn;
          *Last=newn;
          (*Last)->next=*First;        
       }
       else
       {
           newn->next=*First;
           *First=newn;
           (*Last)->next=*First;       
       }
   }
   
   void Display(PNODE First,PNODE Last)
    {
       
       if(First !=NULL & Last !=NULL)
       {
          do
           {
             printf("%d ",First->data);
 	     First=First->next;           
           }while(First != Last->next);       
       }    
    }
   
   int Count(PNODE First,PNODE Last)
   {
     int icnt=0;
     
     if(First != NULL && Last != NULL)
      {
         do
          {
            icnt++;
            First=First->next;          
          }while(First !=Last->next);     
      }
      return icnt;   
   }
   
   void InsertLast(PPNODE First,PPNODE Last,int value)
   {
      PNODE Temp=*First;
      PNODE newn=NULL;
      
      newn=(PNODE)malloc(sizeof(NODE));		
      
      newn->data=value;
      newn->next=NULL;
      
      if(*First==NULL && *Last==NULL)   //if ll is empty
       {
          *First=newn;
          *Last=newn;
          *Last=*First;               
       }else
       {      
          (*Last)->next=newn;
	   *Last=newn;
          (*Last)->next=*First;       
       }       
   }
   
   void InsertAtPose(PPNODE First,PPNODE Last,int value,int pose)
   {
    
     PNODE Temp=*First;
     PNODE newn=NULL;
     
     
     int icnt=Count(*First,*Last);
     
      if(pose<0 || pose > icnt+1)
         {
           return;
         }
         
         if(pose==1)
    	{
    	  InsertFirst(First,Last,value);    	
    	}
    	else if(pose==icnt)
    	{
    	   InsertLast(First,Last,value);   	
    	}
    	else
    	{ 
    	 newn=(PNODE)malloc(sizeof(NODE));
    	 newn->next=NULL;
     	 newn->data=value;
    	   
    	   for(int i=1;i<pose-1;i++)
    	    {
    	      Temp=Temp->next;
    	    }
    	        	    
    	    newn->next=Temp->next;
    	    Temp->next=newn;
    	}  
   }
   
   
   void DeleteFirst(PPNODE First,PPNODE Last)
   {
       PNODE Temp=*First;
       
       if(*First==NULL && *Last==NULL)
        {
         return;
        }
        else if(*First==*Last)
        {
            free(*First);
            *First=NULL;
            *Last=NULL;
        }
        else
         {
            *First=(*First)->next;
             free(Temp);
             (*Last)->next=*First;  
         }
   }
   
   void DeleteLast(PPNODE First,PPNODE Last)
    {
       PNODE Temp=*First;
    
       if(*First==NULL && *Last==NULL)
       {
        return;
       }
       else if(*First==*Last)
        {
           free(*Last);
           *Last=NULL;
           *First=NULL;        
        }
        else
         {
            while(Temp->next != *Last)
             {
               Temp=Temp->next;             
             }
             
             *Last=Temp;
             free(Temp->next);
             (*Last)->next=*First;         
         }   
    }
    
    void DeleteAtPose(PPNODE First,PPNODE Last,int Pose)
    {
    
      PNODE Temp1=*First,Temp2=NULL;
      
      int icnt=Count(*First,*Last);
      
      if(Pose<0 || Pose>icnt)
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
           for(int i=1;i<Pose-1;i++)
           {
            Temp1=Temp1->next;           
           }
           
           Temp2=Temp1->next;
           Temp1->next=Temp2->next;
           free(Temp2);        
        }  
    }   
