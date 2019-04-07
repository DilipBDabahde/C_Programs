//accept array from user and allocate dynamic memory for them and make addition of all elements
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


////////////////////////////////////////////////////////////////////
//
// Name        : arr_addition
// Inptut      : Integer
// Output      : Integer
// Discription : it return additiion of all elemets to entry point function
// Author      : Dilip
// Date  	: 29/may/19
/////////////////////////////////////////////////////////////////////////

	



int arr_addition(int *arr,int size)
 { 
  int sum=0;
  
  for(int i=0;i<size;i++)
    {
     sum+=arr[i];
    }
  return sum;
 }
 
 
 int main()
 {
   int size=0;
   printf("Enter array size\n");
   scanf("%d",&size);
   
   int *ptr=NULL;
   ptr=(int*)malloc(size*sizeof(int));
   
   
   printf("Enter %d elements\n",size);
   for(int i=0;i<size;i++)
   {
     scanf("%d",&ptr[i]);
   }
   int iret=arr_addition(ptr,size);
   printf("Totol is %d\n",iret);
   return 0;      
 }
