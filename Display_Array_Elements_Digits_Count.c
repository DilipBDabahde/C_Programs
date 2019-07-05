/*
2.Write a recursive program which accepts array from user and display number of digits of each number from array. (Don’t use any loop)
Input : {798,79,8,172,39,1}
Output : 3   2  1 3   2  1
*/

#include<stdio.h>

void Digits(int arr[],int size)
 {
   static int x=0,icnt=0,temp=0;
 
   if(x<size)
    {          
      if(temp==0)
      {
        temp=arr[x];
      }      
      if(temp !=0)
      {
         icnt++;
         temp=temp/10;      
      }
      if(temp==0)
      {
        printf("%d ",icnt);
        icnt=0;
        x++;
      }      
      Digits(arr,size);      
    }
}

int main()
 {
   int size=0;
   printf("Enter array size:");
   scanf("%d",&size);
   int arr[size];
   
   for(int i=0;i<size;i++)
    {
      printf("Enter Element:%d\n",i+1);
      scanf("%d",&arr[i]);
    }
    
    printf("Given Array Elenets digits count:\n");
    Digits(arr,size);
      
    printf("\n");
 
 }
