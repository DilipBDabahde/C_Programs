/*
1.Accept number from user and return newly formed number which contains all
digits in increasing order.
Input :
Output : 61756151
11155667
Input :
Output : 67807653
3566778
*/

#include<stdio.h>


int FormNum(int iNo)
 {
   
   int icnt=0,isum=0,ival=0,i=0,idigit=0,itemp=0;
   int arr[10]={0};
   
   if(iNo<=0) 
     {
       iNo=-iNo;
     }
     
    itemp=iNo;
    
    while(iNo>0) 
    {
     idigit=iNo%10;
     arr[idigit]++;
     iNo=iNo/10;
    }
 
    
   for(icnt=0;icnt<10;icnt++)
   {     
     if(arr[icnt] > 0)
     {
       ival=arr[icnt];
       
       while(ival > 0)
       {
        isum=isum*10+icnt;
        ival--;       
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
   printf("FormNum in increasing order: %d\n",iret);
   return 0;
 } 
