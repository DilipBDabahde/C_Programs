//accept array size and as well as array elemts from user and show addition of all arra elemts

#include<stdio.h>
int add(int *arr,int isize);

int main()
{

   int ival,isize;
   printf("Enter array size:\n");
   scanf("%d",&isize);
 
   int arr[isize];
   printf("Enter elems for array size:\n");
   for(int i=0;i<isize;i++)
    {
         scanf("%d",&arr[i]);
    }

   ival=add(arr,isize);
   printf("addition of array all ements is-->>>> %d\n",ival);
  return 0;
}

int add(int *arr,int isize)
{
    int i=0,sum=0;
   for(i=0;i<isize;i++)
   {
      sum+=arr[i];
   }
   return sum;
}
