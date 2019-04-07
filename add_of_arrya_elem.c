//accept array of 10 elemets and show additon of each elemts

#include<stdio.h>


 int main()
 {
 
   int arr[5],i=0,sum=0;
   printf("Enter 5 num:\n");
   for(i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
   }
   
   for(i=0;i<5;i++)
   {
    sum=sum+arr[i];
   }
    printf("\n%d is addition of all array elemts\n",sum);
 
  return 0; 
 
 
 }
