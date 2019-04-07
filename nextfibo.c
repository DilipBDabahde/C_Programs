#include<stdio.h>
 int main()
 {
 
 
  int i=0,a=0,b=1,k=0;
  int n=0;
  printf("Enter a num:\n");
  scanf("%d",&n);
  
  if (n<=0)
   { printf("sorry plz change your input\n");}
  
  else
   {
     for(i=1;i<=n;i++)
     {
       k=a+b;
       a=b;
       b=k;    
     }
     
     printf("value of fibo is  ---->>> %d\n",b);
   
   }
 
 }
