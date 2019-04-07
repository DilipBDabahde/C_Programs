//accept array from user and print reverse of that array

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

class RevNum
 {
   public:
   void revarr(int *arr,int size);
 };

int main()
{
  RevNum obj;
  int size=0;
  printf("Enter size\n");
  scanf("%d",&size);
  int *iptr=NULL;
  iptr=(int*)malloc(size*sizeof(int));
  for(int i=0;i<size;i++)
  {
    cin.getline(iptr,size);
  }
  
  RevNum(iptr,size);
  return 0;
}

void RevNum::revarr(int *arr,int size)
   {
      for(int i=size-1;i>=0;i--)
      {
        printf("%d ",arr[i]);
      }
   }
