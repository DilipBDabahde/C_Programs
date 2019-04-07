//accept two num from user and make additon of the between range
////addbettwonum.c
#include<stdio.h>

 int main()
 {
   int i=0,j=0,k=0;
   int sum=0;
   printf("Enter two num :\n");
   printf("Enter first num :\n");
   scanf("%d",&k); 
   
   printf("Enter second num :\n");
   scanf("%d",&j);   
   
   if((k<=0)&&(j<=0))
    {
      printf("sorry!  change your input source and destionation.....\n");
    }
   
   else
   {
     for(i=k;i<=j;i++)
     {
         
         sum=sum+i;
     }
   
     printf("addiditon of between range is %d\n",sum); 
   
   
   }
 }	
