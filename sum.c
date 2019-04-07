#include<stdio.h>

int main()
 {
   int n=0,i=0;
   int sum=0,m=0;
   printf("Enter a Num:");
   scanf("%d",&n);

   for(i=1;i<=n/2;i++)
      {
      
        if(n%i==0)
       {
         sum=i;
       } 
      
      }
      printf("Largest common factor is: %d\n",sum);
    
 }
