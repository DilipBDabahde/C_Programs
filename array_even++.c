///////////////////////////////////////////////////////////////////////////////////////////
//accept array from usr and increment even num by 1 in array
//
//example:int arr[5]={4,5,6,7,8};
//					 1   1   1  incremented numbers
//            output should be{5 5 7 7 9}
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int makezero(int *arr,int size);
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
  }											//array_even++.c
 
  makezero(arr,size);
return 0;
}
int makezero(int *arr,int size)
{  
  if(arr==NULL || size<0 )
  {
      printf("invalid input please try again.....\n");
  }
   int i=0,sz=0;
   for(i=0;i<size;i++)
  {
     if(arr[i]%2==0)
     {
       arr[i]++;
     }
     printf("%d ",arr[i]);  
  }
   printf("\n");  
}
