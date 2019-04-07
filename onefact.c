#include<stdio.h>

 int main()
 {
   int i=1,fact=1;
   int n=0;
   
   printf("Etr one num:\n");
   scanf("%d",&n);
 
  if(i<=0)
  {
    return 0;
  }
  
  else
  {
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
       
    }
    printf("%d is factoorial of %d",fact,i);
  }
 
 
 
 }
