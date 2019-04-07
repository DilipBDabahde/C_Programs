#include<stdio.h>
int help(int x,int y);
int add(int a,int b);

 int main()
 {
   int i,j;
   printf("Enter 2 values\n");
   scanf("%d%d",&i,&j);
   int ret=help(i,j);
   printf("%d is total\n",ret);
   return 0;
 }
 
 int help(int x,int y)
 {
   int result=add(x,y);
   printf("inside help %d\n",result);
   return result; 
 }
 
 int add(int a,int b)
 {
   int total=a+b;
   printf("inside add %d\n",total);
   return total;
 }
