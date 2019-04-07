//pattern13  row=4 col=4
//           * * * * 
//		 * $ $ *	
//		 * $ $ *
//		 * * * *

#include<stdio.h>
int pattern13(int row,int col);

int main()
{
  int row,col;
  printf("Enter row:\n");
  scanf("%d",&row);
  printf("Enter col:\n");
  scanf("%d",&col);
  pattern13( row,col);
  return 0;
}

int pattern13(int row, int col)
{
  int i=0,j=0;
  
  for(i=1;i<=row;i++)
      {
         for(j=1;j<=col;j++)
         {
           if((i==1)||(i==row)||(j==1)||(j==col))
           {
           printf("* ");
          }
          else
          {
            printf("$ ");
          }
        }printf("\n");
	}printf("\n");
	
}	
