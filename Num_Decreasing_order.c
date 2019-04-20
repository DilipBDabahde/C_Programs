/*
3.Accept number from user and return newly formed number which contains all
digits in decreasing order.
Input : 61756151   Output : 76655111
Input : 67807653  Output : 8776653
*/

#include<stdio.h>


int FormNum(int iNo)
 {
 
  int icnt=0,isum=0,idigit=0;
  int arr[10]={0};
  
  if(iNo<0)
    {
      iNo=-iNo;
    }
       
    while(iNo>0)
    {
      idigit=iNo%10;
      
      /*if(idigit !=0)
      {                                //by using this filter we can avoid addin '0' into our num formation
         arr[idigit]++; 
      }	*/ 
      
      arr[idigit]++;     
      iNo=iNo/10;    
    }
    
    for(icnt=9;icnt>=0;icnt--)
     {       
       if(arr[icnt]>0)
       {
         while(arr[icnt]>0)
         {
           isum=isum*10+icnt;
           arr[icnt]--;
         }
       }    
     }
       
   return isum;
 }
 
 int main()
 {
   int ival=0,iret=0;
   printf("Enter a value\n");
   scanf("%d",&ival);
   iret=FormNum(ival);
   printf("%d\n",iret);
   return 0;
 } 
 
 
