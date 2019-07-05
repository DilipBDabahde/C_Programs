/*
Q5.Write a recursive program which accept number from user and return its reverse
number.
Input :  523
Output : 325
*/

#include<stdio.h>

int Reverse(int iNo) 
  {
    static int Preserve=0;
    
    if(iNo>0)
    {
        Preserve=Preserve*10+(iNo%10);
        iNo/=10;
        Reverse(iNo);
    }
    return Preserve;  
  }
  
  int main()
  {
    int ival=0;
    printf("Enter a Num:");
    scanf("%d",&ival);
    int iret=Reverse(ival);
    printf("After Reverse:%d\n",iret);
    
    return 0;
  }
