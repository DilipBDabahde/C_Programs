//accept array from user and check two num addition is even or not
//
// in this program we take array from user and make additon of eacch elemts and check it is even or not
//
//example: int arr[5]={7,3,2,5,9};
//			     7 3		=10 its even     	
//				 3 2	      =5  its odd
//				   2 5      =7  its odd	
//				     5 9    =14 its even
#include<stdio.h>

int Pairs(int *arr,int size);

int main()
{
  int i=0,size=0;
  
 printf("Enter array Size:\n"); 
 scanf("%d",&size);
 
 int arr[size];
 
 printf("Enter %d elemts into array\n",size);
 for(i=0;i<size;i++)
 {
   scanf("%d",&arr[i]);
 }
 
 Pairs(arr,size);
 return 0;
}

int Pairs(int *arr,int size)
{
  int i=0,sum=0;
  
  for(i=0;i<size-1;i++)  // 3 5 4 6 7 8
  {
      sum=arr[i]+arr[i+1];
      
    if(sum%2==0)
    {
       printf("%d+%d aadition is ->>> %d-even\n",arr[i],arr[i+1],sum);
     }
     else
     {
       printf("%d+%d aadition is ->>> %d-odd\n",arr[i],arr[i+1],sum);
     }
  }
  
      

}
