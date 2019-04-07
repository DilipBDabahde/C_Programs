//accept array as well as array range make addition beteween elemts 

#include<stdio.h>
 int showadd(int *arr,int size,int start,int end);
 
 int main()
 {
     int num,i,ist,ied
     int arr[6]={10,14,5,22,15,96};
     int size=6;
     ist=10;
     ied=25;
     
     showadd(arr,size,ist,ied);
 } 
 
int showadd(int *arr,int size,int ist,int ied) 
  {
      int i=0,sum=0;
      if(arr==NULL || size<=0 || ist>ied)
       {return 0;}
       
       
      for(i=0;i<size;i++)
      {
        if((arr[i]>=ist)&&(arr[i]<=ied))
        {
           sum=sum+arr[i];
        }
      }
      printf("%d",sum); 
  
  }
 
