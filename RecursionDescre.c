/*
Q1.Write a recursive program which accept number from user and display below pattern.
Input : 5
Output : 5 4 3 2 1
*/


#include<stdio.h>

void Display(int iNo) 
 {
    if(iNo>0)
    {
      printf("%d ",iNo--);
      Display(iNo);
    } 
 }
 
 int main()
 {
   int ival=0;
   printf("Enter a value:");
   scanf("%d",&ival);
   Display(ival);
   printf("\n	");
  
  return 0;
 }
