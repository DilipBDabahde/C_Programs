/*
accpet array from user and Sort array in decreasing order
input=arr[]={7,5,12,9,3,4,1};
output: [12,9,7,5,4,3,1]
*/
#include<stdio.h>

void Sort_decre(int arr[],int size)
 {
    int temp1=0,temp2=0,sum=0,i=0,j=0,p=0;
    
    for(i=0;i<size;i++)
     {
       sum=0;
       for(j=0;j<size;j++)
        {
          if(arr[j]>temp1)
            {
              temp1=temp2=arr[j];
            }
            else if(arr[j]>sum && arr[j]<temp2)
            {
              sum=arr[j];
            }
        }
        
        if(temp1==temp2 && p==0)
         {
           printf("%d ",temp1);
           p++;
         }
         else 
         {
           printf("%d ",sum);
           temp2=sum;         
         }        
     }
 }
 
 
 int main()
 {
   int arr[]={7,5,12,9,77,3,4,1};
   int size=(sizeof(arr)/sizeof(arr[0]));
   
   Sort_decre(arr,size);
   printf("\n");
   
  return 0;
 }
