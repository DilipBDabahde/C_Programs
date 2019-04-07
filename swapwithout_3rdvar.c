//accept two num and swap them without using 3rd variable

#include<stdio.h>

int main()
{
  int i=0,j=0;
  
  printf("Enter 2 Nums:\n");
  scanf("%d%d",&i,&j);
  printf("before swap %d %d\n",i,j);
  
  i=i+j;
  j=i-j;
  i=i-j;

 printf("after swap %d %d\n",i,j);
 return 0;
 }
