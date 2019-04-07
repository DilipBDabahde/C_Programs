//accept array from user and return factor of each elemts:
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//example
//
//int arr[3]={1,2,3};  ouput will be 1     1  2      1  3
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//factor_of_array_elements.c
#include<stdio.h> 
int factorofarray(int *crr,int size);

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
  
  factorofarray(arr,size);  
  
}

int factorofarray(int *arr,int size)
{
   int i=0,fact=1,val=0,j=0;

   for(i=0;i<size;i++)   
     {
          for( j=1;j<=arr[i];j++)
          { 
             if(arr[i]%j==0)
             {
            
             printf("%d is fact %d\n",j,arr[i]);
             }
        }
     } 
}
   
