/*accept array from user and show largest and second largest from array
input: arr[]={45,8,91,33,65};
output:[91,65]
*/

#include<stdio.h>

void Max_SecMax(int arr[],int size)
 {
    int temp=0,sum=0;
    int i=0,j=0;
    
    for(i=0;i<size;i++)
    {  
     sum=0;
     for(j=0;j<size;j++)
      {
      
         if(arr[j]>temp)
         {
          temp=arr[j];      
         }
         else if(arr[j]>sum && arr[j] != temp)
         {
           sum=arr[j];
         }               
      }      
    }
    
    printf("MAx is %d Sec_Max is %d\n",temp,sum);
 
 }
 
 int main()
 {
    int arr[]={458,238,931,33,1164};
    int size=(sizeof(arr)/sizeof(arr[0]));
    Max_SecMax(arr,size);
  
  return 0;  
 }
