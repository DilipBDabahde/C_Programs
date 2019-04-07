//pattern15  row =5 col=5
//  A A A A A
//  B B B B B
//  C C C C C
//  D D D D D
//  E E E E E

#include<stdio.h>
int pattern15(int row,int col);
int main()
{
   int row,col;
   printf("Enter irow:\n");
   scanf("%d",&row);
   printf("Enter icol:\n");
   scanf("%d",&col);
   pattern15( row, col);
   return 0;
}

int pattern15(int row,int col)
{
   int i=0,j=0;
   for(i=1;i<=row;i++)
    {
      for(j=1;j<=col;j++)
      {
        if(i==1)
        {
          printf("A ");
        }
        else if(i==2)
        {
         printf("B ");
        }
        else if(i==3)
        {
         printf("C ");
        }
        else if(i==4)
        {
          printf("D ");
        }
      }printf("\n");
    }printf("\n");
    
}
