//accept array from usr and allocate dynamic memory using calloc function for array
//
//in this program we add to elemts of array and check addition of them is even or not if we found even then we return those 2 
// nums as well as addition of them
//exampel int arr[8]={1,2,3,4,5,6,7,3};
//here we have additon of 7 and 3 is 10 that is even 
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int addmem(int *arr,int isize);

int main() 							// 1 2 3  4 5 6 7 3 8 
{
   int i=0,icnt=0,size=0,ilength=0;
   int *ptr=NULL;
   printf("Enter a size of array length\n");
   scanf("%d",&ilength);
   
   ptr=(int *)calloc(ilength,sizeof(int));      //calloc to use memory allocation on heap
   
   if(ptr==NULL)
    { 
      printf("Memory not allocated:\n");
    }
    
   printf("Enter %d elemts into array\n",ilength);
   for(i=0;i<ilength;i++)
   {
      scanf("%d",&ptr[i]);
   }
   
  addmem(ptr,ilength);
  return 0;
}

int addmem(int *arr,int size)   //arr[]={2,4,5,7,3};
{
   int i=0;
   for(i=0;i<size-1;i++)
    {
      if(((arr[i]+ arr[i+1])%2)==0)
      {
        printf("add of %d & %d is %d even\n",arr[i],arr[i+1],arr[i]+arr[i+1]);
      } 
    }
}
