/*
Q1.Write a recursive program which accept number from user and display below pattern. (Don’t use any loop)
Input : 4
	  1  2  3  4
	  1  2  3  4
	  1  2  3  4
	  1  2  3  4	  
*/

#include<stdio.h>

 void Pattern(int iNo)
 {
   static int i=1,j=1;
   
   if(i<=iNo*iNo)
    {
       printf("%d ",j++);
       if(j>iNo)
       {
        printf("\n");
        j=1;
       }
       i++;
       Pattern(iNo);       
    }
 }
 
 int main()
 {
   int val=0;
   printf("Enter a number:");
   scanf("%d",&val);
   Pattern(val);
   return 0;
 } 

