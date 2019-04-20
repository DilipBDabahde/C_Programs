/*
4. Accept two numbers from user and display common factors of that two
numbers.
Input : 12 20  Output :  1 2 4
Input : 28 42  Output :  1 2 7 14 
*/

#include<stdio.h>

int DisCommonFactor(int iNo1,int iNo2)
 {
    int icnt=0,ival=0;
    
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
         printf("%d ",icnt);
       }     
     }
 }
 
 
 int main()
 {
   int ival1=0,ival2=0;
   printf("Enter two values\n");
   scanf("%d\n%d",&ival1,&ival2);
   DisCommonFactor(ival1,ival2);
   printf("\n");
   return 0;
 }
