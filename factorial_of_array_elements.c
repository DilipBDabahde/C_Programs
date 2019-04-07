//accept array from user and return factorial of each elemts:
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//example:
//
//int arr[3]={2,3,4}; output will be-- 2 6 24
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//factorial_of_array_elements.c
#include<stdio.h> 
int factorialofarray(int *crr,int size);

int main()
{
  int i=0,size=0;
  printf("Enter array size:\n");
  scanf("%d",&size);
  int arr[size];
  
  printf("Enter %d elements into array:\n",size);
 
  for(i=0;i<size;i++)
  {
  scanf("%d",&arr[i]);
  }
  
  factorialofarray(arr,size);  
  
}

int factorialofarray(int *arr,int size)
{
   int i=0,fact=1,val=0;
   
   for(i=0;i<size;i++)   
     {
       for(int j=j;j<arr[i];j++)
         {
             fact=fact*j;
		  printf("%d is factorial of %d\n",fact,j	);
         }
     }
}
