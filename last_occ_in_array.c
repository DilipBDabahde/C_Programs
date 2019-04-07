//accept one array from user and one num and check occurance of that num into array and return last occurance
#include<stdio.h>
int lastocc(int *arr,int size,int icnt);
int main()
{
  int size=0,i=0,icnt=0;
  
  printf("Enter array size:\n");
  scanf("%d",&size);
  int arr[size];
 
  printf("Enter %d elements in array\n",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  
  printf("Enter one elemts to check its last occurance into array:\n");
  scanf("%d",&icnt);
  
  lastocc(arr,size,icnt);
  return 0;
}

int lastocc(int *arr,int size,int val)
{ 				    // 0 1 2 3 4
   int i=0,help=0,inct=0;   // 4 5 6 4 8
   int *ptr=NULL;
   for(i=0;i<size;i++)
   {     
      
     if(arr[i]==val)
     {
       help=arr[i];
     }   
   }
   
   printf("%d is last occurance in array index of %d num:\n",inct,val);
}
