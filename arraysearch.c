//seach array elemts with a index 
	
#include<stdio.h>

int findnum(int *arr,int size,int num)
{
   int i;
   for(i=0;i<size;i++)
   {
     if(arr[i]==num)
     {
      break;
     }
   }
   if(i==size)
   {
    return -1;
   }
   else
   {
     return i;
   }

}

int main()
{
  int size,num,n,i;
  printf("Enter array size:\n");
  scanf("%d",&size);
  int arr[size];
  
  printf("Enter %d elemts for array\n",size);
  for(i=0;i<size;i++)
  {
  
    scanf("%d",&arr[i]);
  }

  printf("Enter a num to find its index into array:\n");
  scanf("%d",&num);
  
  int iret=findnum(arr,size,num);
  if(iret>0)
  {
    printf("%d index num is %d\n",num,iret);
  }
  else
  {
    printf("%d number is not part of our array\n",num);
  }
}  
