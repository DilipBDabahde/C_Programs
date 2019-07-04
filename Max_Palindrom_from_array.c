//accept array from user and show max palidrom number from that array
//input: arr[]={112,191,231,999,141,662,202}
//output: 999			//220 121 22 2
#include<stdio.h>
#include<stdlib.h>

int Max_Palindrom(int arr[],int size)
 {
 
    int temp=0,idigit=0,sum=0,pose=-1,max=0,x=0;
    
   for(int i=0;i<size;i++)
   { 
     temp=arr[i];
     while(temp>0)
     {
       idigit=temp%10;
       sum=sum*10+(idigit);
       temp=temp/10;
     }
     if(sum==arr[i])
     {  
         if(arr[i]>max)         
         {
          max=arr[i];
         }
     }     
     sum=0;
    }  
        if(max>0)
        return max;
        else        
        return -1;
        
 }
 

 int main()
 {
   int i=0,size=0;
   printf("Enter array size\n");
   scanf("%d",&size);
   
   int arr[size];
   
   printf("Enter values for array\n");
   for(int j=0;j<size;j++)
   {
     printf("Enter value:%d:\n",(j+1));
     scanf("%d",&arr[j]);
   }
   
   int iret=Max_Palindrom(arr,size);
   
   if(iret>=0)
   {   
   printf("\nMax Palindrom is:%d\n",iret);
   }
   else
   printf("there is not palindrom is given array\n");
   return 0;   
 }
