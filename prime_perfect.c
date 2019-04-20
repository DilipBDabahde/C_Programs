/* accept rannge from user and display perfect & prime num from that rang
input: 1 to 30  output: 
prime num is: 5 7 11 13 17 19 23 29
perfect num is :6 28
*/

#include<stdio.h>
 		
int DisPerfect_Prime(int istart,int iend)
 { 
   int icnt=0,isum=0,iNo=0;
  if(istart>iend)	
  {
   return 0;
  }
  if(istart<0 || iend<0)
  {
   return 0;
  }
   
 
  
  for(iNo=istart;iNo<=iend;iNo++)
  { 
    isum=0;
    for(icnt=1;icnt<=iNo/2;icnt++)
    {        
       if((iNo%icnt)==0)
       {
          isum+=icnt;  
       }          
    }         
    if(isum==iNo)
     {     
      printf("%d is perfect number\n",iNo);
     }   
  
    for(icnt=2;icnt<=iNo/2;icnt++) 
      {
         if(iNo%icnt==0)
         {
          break;
         }      
      }      
      if(icnt>iNo/2)
      {
        printf("%d is prime\n",iNo);
      }       
   }  
 }
 
 int main()
 {
  int ival1=0,ival2=0;
  printf("Enter range\n");
  scanf("%d %d",&ival1,&ival2);
  DisPerfect_Prime(ival1,ival2);
  
  return 0;
 }
