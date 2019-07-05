/*
Q2.Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9
*/

#include<stdio.h>

int Max(int iNo) 
 {
    static int temp=0;
    
    if(iNo>0)
    {      
      if(iNo%10 > temp)
      {
       temp=iNo%10;
      }
      iNo /=10;
      
      Max(iNo);    
    } 
    return temp;;
 }
 
 int main()
 { 
   int ival=0;
   printf("Enter a value:");
   scanf("%d",&ival);
   int iret=Max(ival);
   printf("Max digit is:%d\n",iret);
  
   return 0;
 
 }
