//accept array from user and segregate its elements
// 11 21 21 11 21 21 11 11
//   11 11 11 11 21 21 21 21
   
#include<stdio.h>   
#include<stdlib.h>
#include<string.h> 
 int seg(int *arr,int len)
 {
 
 
  int start=0;
  int end=len-1;
  
  while(start < end)
 {
    while((arr[start]==11)&&
    	  (start<end))
  {
   start++;
  }
  
  while(arr[end]==21 && 
  	start< end )
      {
       end--;
      }
    
    if((arr[start==21])&&
    	(arr[end]==11))  
       {
         arr[start]=11;
         arr[end]=21;
       }
   } 
 }

 int main()
  {
   int size=0;
   printf("Enter array size\n");
   scanf("%d",&size);
   int arr[size];
   
   printf("Enter %d values into array with 2 diff nums\n",size);
   for(int i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);   
   }
   
   int len=sizeof(arr)/sizeof(arr[0]);

   seg(arr,len);
   
   for(int i=0;i<len;i++)
    {
      printf("%d ",arr[i]);
    }
   return 0;  
  }
