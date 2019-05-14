#include<stdio.h>

 void ll(int arr[],int size)
  {
       
       int i=0,j=0,temp=0,sum=0;
       
        for(i=0;i<size/2;i++)
        {
           sum=temp;
           for(j=0;j<size;j++)
           {
             if(arr[j]>temp)
             {              
              temp=arr[j];
           
             }else if(arr[j]<sum && arr[j]<temp)
             {
               sum=arr[j];               
             
             }           
           }
        }
        
       printf("%d\n",temp-sum);
   
  
  }
 
int main()
{
 
   int arr[]={8,5,1,3,9,2};
   int size=(sizeof(arr)/sizeof(arr[0]));
   
   ll(arr,size);
 return 0;
}
