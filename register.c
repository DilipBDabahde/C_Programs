#include<stdio.h>

 int main()
 {
  register int i=10;
   
   int *p=&i;
   
   printf("%d\n",i);
   
   
   printf("%d\n",*p);
 
 }
