//endian ness swapping programming in c

#include<stdio.h>

 int endianessswap(int no);
 
 int main()
 {
 
   int no=0;
   printf("Entera num to change its endianess\n");
   scanf("%d",&no);
   printf("%d\n",no);
   int ret=endianessswap(no); //function call
   printf("%d\n",ret);
   return 0;
 
 }
 
 
 int endianessswap(int no)
 {
   int no1=0,no2=0,no3=0,no4=0;
   
   int result=0;
   
   no1=0xff000000;
    no2=0x00ff0000;
    no3=0x0000ff00;
    no4=0x000000ff;
   
   result=no1 | no2| no3 |no4;
   return result;
 
 
 
 
 }
