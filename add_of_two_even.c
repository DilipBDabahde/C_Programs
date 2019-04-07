#include<stdio.h>
void makezero(int *arr,int size);
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
 
  makezero(arr,size);
return 0;
}

void makezero(int *arr,int size)
{  
  if(arr==NULL || size<0 )
  {
      printf("invalid input please try again.....\n");
  }
   int i=0,v1=0,v2=0,sum=0;
   
   for(i=0;i<size;i++)
  {
     if((arr[i]+arr[i+1]%2)==0)sssss
     {
       printf("%d %d",arr[i],arr[i+1]);
     }    
  }
   printf("\n");  
}
