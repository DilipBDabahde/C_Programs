/*
Q4.Write a recursive program which accept number from user and return its factorial.
Input : 5
Output : 120
*/

#include<stdio.h>

int Fact(int iNo)
 {
    static int fact=1;
    
    if(iNo>0)
    {
      fact*=iNo--;  //first multiplicatin done and then iNo--
      Fact(iNo);    
    }
    return fact; 
 }
 
 int main()
 {
   int ival=0;
   printf("Enter a value:");
   scanf("%d",&ival);
   
   int iret=Fact(ival);
   printf("Factorial of given number is:%d\n",iret);
   
   return 0;
 }
