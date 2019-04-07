//accept array from user as well as one elemts and print 0 at given num
//////////////////////////////////////////////////////////////////////////////////////////
//example: int arr[6]={4,5,8,9,4,1};  and elemt to make zero   4  
// output will be
//		          {	058901 }
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int makezero(int *arr,int size,int icnt);
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
  int icnt=0;
  printf("Number num to check its occurance:\n");
  scanf("%d",&icnt);
  makezero(arr,size,icnt);
return 0;
}
int makezero(int *arr,int size,int icnt)
{  
  if(arr==NULL || size<0 ||icnt<0)
  {
      printf("invalid input please try again.....\n");
  }
   int i=0,sz=0;
   for(i=0;i<size;i++)
  {
     if(arr[i]==icnt)
     {
       arr[i]=0;
     }
     printf("%d ",arr[i]);  
  }
   printf("\n");  
}
