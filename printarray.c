//here we take input from user and print arra like jagged

#include<stdio.h>
int Helping(int brr[],int size);

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
  
  Helping(arr,size);
return 0;
}

 int Helping(int brr[],int size)
 {
    int i=0,j=0;
    
    for(i=0;i<size;i++)
    {
      for(j=1;j<=brr[i];j++)
      {
         printf("%d ",j);
      }   
      printf("\n");  
    }
 }
