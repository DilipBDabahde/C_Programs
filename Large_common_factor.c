/*
4. Accept two numbers from user and return largest common factors of that two numbers.
Input : 12 20  Output :  4
Input : 28 42  Output :  14 
*/

#include<stdio.h>

int LargeCommonFactor(int iNo1,int iNo2)
 {
    int icnt=0,ival=0,itemp=0;
    
    if(iNo1<0)
    {
     iNo1=-iNo1;
    }
    if(iNo2<0)
    {
     iNo2=-iNo2;
    }
    
    if(iNo1>iNo2)
    {
      ival=iNo1;
    }
    else
    {
      ival=iNo2;
    }
    
    for(icnt=1;icnt<=ival/2;icnt++)
     {
        if(iNo1%icnt==0  && iNo2%icnt==0)
       {
         itemp=icnt;
       }     
     }
     return itemp;
 } 
 
 int main()
 {
   int ival1=0,ival2=0,iret=0;
   printf("Enter two values\n");
   scanf("%d\n%d",&ival1,&ival2);
   iret=LargeCommonFactor(ival1,ival2);
   printf("%d\n",iret);
   return 0;
 }
