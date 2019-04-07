//accept one num from user and display its factor 
//input 5   output 120   input 3   output 6
//findfact.c
#include<stdio.h>

 int main()
 {
 
   int n,m=1,o;
   printf("Enter one num to get its factor:\n");
   scanf("%d",&n);
 
  
   
  
  
     for(int i=1;i<=n;i++)
      {
        m=m*i;
      }
       printf("%d is factor \n",m);
     
   
 }
 
