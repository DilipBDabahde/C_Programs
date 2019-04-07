#include<stdio.h>
 int LargFact(int ival);
 int main()
 {
   int i=0,num=0,n;
   
   printf("Enter a num:\n");
   scanf("%d",&n);
 
   if(n<0)
   {
     n=-n; 
   }
   
   for(i=1;i<=n/2;i++)
   {
     if(n%i==0)
     {
     num=i;
     }
  } 
    printf("this is largest factor if %d nym %d \n",n,num);
   
 }
