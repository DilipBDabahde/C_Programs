/* accept one array size from user and make array of that ssize and take one another num and check frequency of that num into array */

#include<stdio.h>
int freq(int *arr,int size,int num);

int main()
{
  int size,num,i,ret=0;
  
  printf("Enter array  size:\n");
  scanf("%d",&size);
  int arr[size];
  
  printf("Enter %d elements for array\n",size);
  for(i=0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
  
  printf("Enter an elemts to check its frequecny into array:\n");
  scanf("%d",&num);
  
  ret=freq(arr,size,num);
  if(ret>0)
  {
  printf("frequency of [%d] is [%d] times in array\n",num,ret);
  }
  else
  {
    printf("%d is not part of our array\n",num);
  }    
}

int freq(int *arr,int size,int num)
{
  int i=0,sum=0;
  for(i=0;i<size;i++)
  {
     if(arr[i]==num)
    {
      sum++;
    }
  }
  
  if(sum>0)
   {
     return sum;
   }
   else
   {
     return -1;
   }
  
  
  
}

