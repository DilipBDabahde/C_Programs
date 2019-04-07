//Dynamic memory allocation for array using calloc function return its even num addition

#include<stdio.h>
#include<stdlib.h>

int evenadd(int *arr,int size);

int main()
{

   int i=0,size=0;
   int *BRR=NULL;
   
   printf("Enter array size:\n");
   scanf("%d",&size);

   BRR=(int *)calloc(size,sizeof(int *));
   
   
   if(BRR==NULL)
   {
     printf("Unable to allocation memory:\n");
   }

   printf("Enter %d elemts into array:\n",size);
   for(i=0;i<size;i++)
   {
     scanf("%d",&BRR[i]);
   }
   
  int result=evenadd(BRR,size);
  printf("%d is total addition of even num\n",result);

  free(BRR);

 return 0;
 }
 
 int evenadd(int *arr,int size)
 {
    int i=0,temp=0;
    for(i=0;i<size;i++)
    {
      if(arr[i]%2==0)
      {
         temp=temp+arr[i];
      }
    }
      return temp;
 }
