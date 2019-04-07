#include<stdio.h>
 int main()
 {
   int val=4,i=0,fact=1;
 
   for(i=1;i<val;i++)
   {
     fact+=fact*i;   
   }
   printf("%d\n",fact);
 }
