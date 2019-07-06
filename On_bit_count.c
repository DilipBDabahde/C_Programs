//accept num from user and count its binary 1's count from given number 
/*
 input: 11  binary of 11 is= 1011  reverse ---> 3 bits on
 input: 22  binary of 22 is= 10110 reverse ---> 3 bits on

*/


#include<stdio.h>

int BitOnCount(int iNo)
 {
   static int icnt=0;
    
    if(iNo<0)
    {
     return icnt;
    }
    
    if(iNo>0)  
    {
      if(iNo%2 !=0)
      {
       icnt++;
      }
      iNo=iNo/2;
      BitOnCount(iNo);
    } 
    return icnt;     
 }
 
 int main()
 {
  int val=0;
  printf("Enter a value:");
  scanf("%d",&val);
  int iret=BitOnCount(val);
  printf("Total Bits on :%d\n",iret);
  return 0;
 } 
