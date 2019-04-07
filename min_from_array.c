//accept array from user and return min num from array 
//min_from_array.c
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
  }											
 
  makezero(arr,size);
return 0;
}
int makezero(int *arr,int size)
{  
  if(arr==NULL || size<0 )
  {
      printf("invalid input please try again.....\n");
  }
   int i=0,imin=0;
   imin=arr[i];
   for(i=0;i<size;i++)
  {
     if(arr[i]<imin)
     {
       imin=arr[i];
     }
       
  }
  printf("minimum elemen from given array is <<--- %d ---->>\n",imin);
   printf("\n");  
}
