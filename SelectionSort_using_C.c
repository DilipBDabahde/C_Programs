//accept array from user and sort that array using selection sort technique
/*
  input:arr[]={7,9,25,1,67,4,99,6,4,7,5}
  output:
*/

#include<stdio.h>

void SelectionSort(int arr[],int size) 
 {
      int i=0,j=0,min=0,pass=0,temp=0;
      
      for(i=0;i<size;i++)
      {
         min=i;
         
         for(j=i+1;j<size;j++)
         {         
           if(arr[j] < arr[min])
           {
             min=j;
           }         
         }
         
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;
      }
 }
  
 int main()
 {
   int size=0;
   printf("Enter array size\n");
   scanf("%d",&size);
   int arr[size];
   
     for(int j=0;j<size;j++)
     {
       printf("Enter values %d\n",(j+1));
       scanf("%d",&arr[j]);
     }
     
   SelectionSort(arr,size);
   printf("After SelectionSort\n");
   for(int i=0;i<size;i++)  
    {
      printf("%d ",arr[i]);    
    }
    
    printf("\nGoodBye\n");
    
    return 0;
 }
