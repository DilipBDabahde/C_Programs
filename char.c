#include<stdio.h>
int main()
{
  int i=0,x=0;
  /*for(x=i=97;i<x+26;i++)
  {
    printf("%c\n",i);
  } */
  
  
  for(i=0;i<255;i++)
   {
     printf("%d %x\n",i,i);
   }
  printf("\n");
  return 0;
}
