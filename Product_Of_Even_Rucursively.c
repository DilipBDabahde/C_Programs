/*
Q4.Write a recursive program which accept number from user and return product of even digits.
Input : 67832
Output : 96
*/


#include<stdio.h>

int Product(int iNo)
 {
   static int sum=1;
   
   if(iNo>0)
    {
      if((iNo%10)%2==0)
      {
        sum*=iNo%10;
      }
      iNo/=10;
      Product(iNo);    
    } 
    
    if(sum!=1)
    return sum;
    else
    return 0;
 }
 
 int main()
 {
  
   int ival=0;
   printf("Enter a Num:");
   scanf("%d",&ival);
   int iret=Product(ival);
   printf("After Producnt Num is:%d\n",iret);
   
   return 0;
 }
