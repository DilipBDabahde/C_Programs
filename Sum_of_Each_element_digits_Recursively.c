/*
Q3.Write a recursive program which accepts array from user and display addition of digits of each number from array. (Don’t use any loop)

Input : {798,79,8,172,39,1}
Output : 24  16 8 10  12 1
*/

#include<stdio.h>

void Number_Digits_Sum(int arr[],int size)
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
         icnt+=temp%10;
         temp=temp/10;      
      }
      if(temp==0)
      {
        printf("Sum of %d Elemet is: %d\n",x+1,icnt);
        icnt=0;
        x++;
      }      
      Number_Digits_Sum(arr,size);      
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
    Number_Digits_Sum(arr,size);
      
    printf("\n");
 
 }
