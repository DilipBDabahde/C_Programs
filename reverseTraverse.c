//accept array from user and display its last occurance in array
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// example: int arr[7]={1,11,2,44,55,1,77};   finding num is ->> 1
// in above array  we found 1 index num 0 then again we found  at index num 5
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
//reverseTraverse.c
#include<stdio.h>
int reverselastoccurrance(int *arr,int size,int icnt);
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
  reverselastoccurrance(arr,size,icnt);
return 0;
}

int reverselastoccurrance(int *arr,int size,int icnt)
{
  int i=0,j=0,temp=0,val=0;
 
  for(i=size-1;i>=0;i--)
    {
      temp++;
     if(arr[i]==icnt)  
     {
       val=temp;
     }
    }
    printf("%d is last occurance in your array\n",val);

}
