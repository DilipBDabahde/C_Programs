//accept num and show its fibo


#include<stdio.h>

 int fibo(int ino);
 int main()
 {
    int i=0;
    printf("Enter anum:\n");
    scanf("%d",&i);
    fibo(i);return 0;
 }
 
 
 
 int fibo(int ino)
 {
   int i=0;int j=1;int k=0;
   int a=0,b=1;
   
   if(ino<=0)
   {
     printf("sorry change your input:\n");
   }
 
   else 
   {
     for(i=1;i<=ino;i++)
     {
     
       k=a+b;
       a=b;
       b=k;
       printf("fibo series is ->>>>   %d\n",b);    
     
     }
   }
 
 }
