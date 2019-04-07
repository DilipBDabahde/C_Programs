//accept array from user and printing * $ using array rows
//array_star_dollor.c
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//int arr[4]={4,3,7,6};
//if arr[i]%2==0  then print '*' else print $
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int printstartdoller(int *arr,int size);
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
  
  printstartdoller(arr,size);
return 0;
}

int printstartdoller(int *arr,int size)
{
   int i=0,j=0,icnt=0;
   
   for(i=0;i<size;i++)
   {
     for(j=0;j<arr[i];j++)
     {
        if(arr[i]%2==0)
        {
           printf("* ");
        }
        else
        {
          printf("$");
        }
        
     }printf("\n");
   }

}
