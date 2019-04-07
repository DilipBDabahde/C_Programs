//accept array from user and display first and last element and 
//increment first and decrement last by one

#include<stdio.h>
#include<stdlib.h>

 int firstlast(int *arr,int size);
 
 int main()
 {
   int i=0,length=0;
   int *ptr=NULL;
 
   printf("Enter Array length:\n");
   scanf("%d",&length);
   
   ptr=(int *)calloc(length,sizeof(int));
   if(ptr==NULL)
   {
     printf("Calloc is unsuccessful\n");
   }
   
   printf("Enter%d elemts into array:\n",length);
   for(i=0;i<length;i++)
   {
      scanf("%d",&ptr[i]);
   }
   firstlast(ptr,length);
 }
 
 int firstlast(int *arr,int size)
 {
   int i=0,sum=0;
   int end=size;
    end=end-1;
   for(i=0;i<size;i++)
   {
   
    if(arr[i]<=arr[end])
    { 
      printf("%d %d ",arr[i],arr[end]);        
      printf("add is ->>> %d\n",arr[i]+arr[end]);
    }
    end--;
   }
    printf("\n");
 
 }
