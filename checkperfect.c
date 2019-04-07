//accept one num frm user and check that num is prime of not
#include<stdio.h>
 int main()
 {
  
   int i=0,j=0,k=0,rem=0,sum=0;
   
   printf("Enter a num:\n");
   scanf("%d",&k);
   
   for(i=1;i<=(k-1);i++)
  {
     rem=(k%i);
     if(rem==0)
     {
       sum=sum+i;
     }  
  }
  
   if(sum==k)
   {
     printf("%d is perfect number:\n",k);
   }
   else
   {
     printf("%d is not perfect number:\n",k);
   }
 
 }
