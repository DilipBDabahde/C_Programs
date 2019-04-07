#include<stdio.h>

 int main()
 {
   int i=1,fact=1;
   int n=0,m=0;
   
   printf("Etr one num:\n");
   scanf("%d%d",&n,&m);
 
  if(n<=0 && m<=0)
  {
    return 0;
  }
  
  else
  {
    for(i=1;((i<=n/2) || (i<=m/2));i++)  // 20  15
    {
       if((n%i==0)&&(m%i==0))
       {fact=fact*i;}       
    }
    printf("%d is common factoorial of %d %d",fact,n,m);
  }
 
 
 
 }
