
#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define FAILURE -1

int chkfact(int ino1,int ino2)
  {   
      if(ino1<0)
       {
         ino1=-ino1;
       }
       if(ino2<0) 
       {
        ino2=-ino2;        
       }
       
       if(ino2>ino1 || ino2==0)
        {
         return FAILURE;
        }
    if(ino1%ino2==0)
    {
      return TRUE;
    }
    else 
    {
     return FALSE;
    }  
  }
 
void disfact(int ino)
  {
    if(ino<0)
    {
      ino=-ino;
    }
    
    int icnt=0,bret=0;
    for(icnt=1;icnt<ino;icnt++)
     {
      /*  if(ino%icnt==0)
        {
         cout<<icnt<<" ";
        }*/
        
      bret=chkfact(ino,icnt);
      if(bret==TRUE)
      {
       printf("%d ",icnt);
      }  
        
     }
  }  
  
  
  int main()
  {
    int ival1=0;
    printf("Enter a value\n");
    scanf("%d",&ival1);
    disfact(ival1);
   /* int bret=chkfact(ival1,ival2);
     if(bret==TRUE)
     {
      printf("TRUE\n");
     }
     else if(bret==FALSE)
     {
      printf("FALSE\n");
     }
     else
     {
      printf("FAILURE\n");
     }
  */
  
  }
