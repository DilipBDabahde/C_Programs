#include<stdio.h>

 int main()
 {
   int i=1,ino=8;
   for(int j=1;j<=ino*2;j=j+2)
   {
      printf("%d ",j);
   }
   printf("\n");
  
   while(i<=ino*2)
   {
     if(i%2 !=0)
     {
      printf("%d ",i);
     }
    i++; 
   }
   printf("\n"); 
 }
