/////////////////////////////////////////////////////////////////////////////////////////////////
// example = accept array from user and make addition of first and last elemts and incremet first by 1 and decrement last by 1
// 
//  int arr[5]={1,2,3,4,5};    		|   if we hava even elemets int arr[6]={1,2,3,4,5,6};
//  output      1       5 =6			|                            output     1         6=7
//			2   4	  =6			|							2     5  =7
//                  3     =break; looops	|                                           3 4    =7
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 int firstlast(int *arr,int size);
  
 int main()
 {
   int i=0,size=0;
   int *ptr=NULL;
   
   printf("Enter array size:\n");
   scanf("%d",&size);
   
   ptr=(int *)calloc(size,sizeof(int));
   
   printf("Enter %d elemts into array\n",size);
   for(i=0;i<size;i++)
   {
     scanf("%d",&ptr[i]);
   }
  
  firstlast(ptr,size);
  return 0;
 }
 
 int firstlast(int *arr,int size)
 {
    int i=0,j=0,don=0;
    j=size-1;
   // while(i<size)   //we can use for as well as while remove comment and add comment to for loop
   for(i=0;i<size;i++)
    {
       
       if(arr[i]>=arr[j] ||arr[i]==arr[j] )
       {break;}
       
       
       don=arr[i]+arr[j];
       printf("%d is add of %d  & %d\n",don,arr[i],arr[j]);
       j--;
    } 
 }
