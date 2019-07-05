/*
Q2.Write a recursive program which accept number from user and return difference between largest and smallest digit.
Input : 87983
Output : 6 (9-3)   //if 0 comes at begining we donot consider them ex. 0044 output:0 min=4 ,max=4 so 4-4=0
*/

#include<stdio.h>

int DiffMin_Max_Digit(int iNo)
 {
    static int min=9,max=0,x=0;
   
    if(iNo>0)
     {
        x++;
        if(iNo%10 < min)
        {
          min=iNo%10;
        }
        if(iNo%10 > max)
        {
          max=iNo%10;
        }
        iNo=iNo/10;
        
        DiffMin_Max_Digit(iNo);  
     }
     
     if(min>max && x!=0)
     return min-max;
     else if(x!=0)
     return max-min; 
 }
 
 int main()
 {
   int  ival=0;
   printf("Enter a number:");
   scanf("%d",&ival);
   int iret=DiffMin_Max_Digit(ival);
   printf("Diff from min and max digits of given number is:%d\n",iret);
   
   return 0;
 }
