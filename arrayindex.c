/* accept one array size and elemts from user and as well as take one elemts from user and check that elemts into array and return its index */

#include<stdio.h>
int retindex(int *arr,int size,int num);

int main()
{
   int num,size,i;
   printf("Enter array size:\n");
   scanf("%d",&size);
   int arr[size];
   printf("Enter %d elemts for array:\n",size);
   for(i=0;i<size;i++)
  {
     scanf("%d",&arr[i]);
  }
  
  printf("Enter one Elemts to check its index:\n");
  scanf("%d",&num);

  int ret=retindex(arr,size,num);
   printf("your num locates on-->> %d <<-- index in array\n",ret);
  
  return 0;
}

int retindex(int *arr,int size,int num)
{
   int i=0,sum=0;
   int *ptr=NULL;
   for(i=0;i<size;i++)
   {
     if(num==arr[i])
     break;
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
