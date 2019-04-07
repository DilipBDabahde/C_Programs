//wap and take rrow and col from user and print that num of * pattern
// intput 	row=4  col=4
//	* * * * 
//	* * * * 
//	* * * * 
//	* * * * 
	
	
#include<stdio.h>

int pattern1(int row,int col);
int main()
{
  int row,col;
  printf("Enter row size\n");
  scanf("%d",&row);
  printf("Enter col size\n");
  scanf("%d",&col);
  pattern1(row,col);
  return 0;
}

int pattern1(int row,int col)
{
  int i=0,j=0;
  for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
        printf("* ");
     }printf("\n");
   }
  printf("\n");
}
