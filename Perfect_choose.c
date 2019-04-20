//accept value 'N' from user and display that number of perfect number on screen  
// input :   3    output : 6 28 496

#include<stdio.h>

typedef unsigned long int UINT;

void PerfectN(int icount)
 {
  
  UINT iNo=0,iCnt=0,iSum=0;
  
  if(icount<0)
  {
    icount=-icount;
  }
  
  for(iNo=1;icount!=0;iNo++)
   {
     for(iCnt=1,iSum=0;iCnt<=iNo/2;iCnt++)
      {
        if(iNo%iCnt==0)
         {
           iSum=iSum+iCnt;
         }
      }
      
      if(iSum==iNo)
       {
         printf("%ld ",iNo);
         icount--;
       }   
   } printf("\n"); 
 }
 
 int main()
 {
  int ival=0;
  printf("Enter a value\n");
  scanf("%d",&ival);  
  PerfectN(ival);
  return 0;
 }
