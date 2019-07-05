/*
Q5.Write a recursive program which accept array from user and return the largest number
Input : {32,42,35,56}
Output : 56
*/

#include<stdio.h>

int max(int arr[],int size)
 {
   static int ival=0;
   
   if(size > 0)
    {      
      if(arr[--size]>ival)
      {
        ival=arr[size];      
      }
      max(arr,size);   
    }    
    return ival; 
 }
 
 int main()
 {
   int val=0;
   printf("Enter array size:");
   scanf("%d",&val);
   int arr[val];
   
   printf("Enter valeus for array\n");
   
   for(int i=0;i<val;i++)
    {
      printf("Enter element %d\n",i+1);
      scanf("%d",&arr[i]);
    }
    
    int iret=max(arr,val);
    printf("Max element from given array is:%d\n",iret);
    return 0;
 }
