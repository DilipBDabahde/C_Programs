//accept row & col from user and print given input
// row=5   col=5
//  A A A A A
//  B B B B B
//  C C C C C
//  D D D D D
//  E E E E E

#include<stdio.h>
int CapLet(int row,int col);
int main()
{
  int i=0,j=0;
  printf("Enter row:\n");
  scanf("%d",&i);
  printf("Enter col :\n");
  scanf("%d",&j);
  CapLet(i,j);
  return 0;
}

int CapLet(int row,int col)
{
   int i=0,j=0;
   char ch='A';
   
   for(i=1;i<=row;i++,ch++) 
   {
     for(j=1;j<=col;j++)
     {
       printf("%c ",ch);
     }printf("\n");   
   }printf("\n");
}
