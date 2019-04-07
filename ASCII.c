//print all ASCII table in c

#include<stdio.h>

int main()
 {
   
   int i=0;
   for(i=0;i<255;i++)
   {
       printf("%d= %c %x %o\n",i,i,i,i);
   }
   printf("\n\n");
 }
