//accept row and col from usr and print below pattern
//  input  row=5 col=5
//  output *    
//	     * * 
//	     * * * 
//	     * * * * 

#include<stdio.h>
int pattern18(int row,int col);
int main()
{
  int row=0,col=0;
  printf("Enter a row\n");
  scanf("%d",&row);
  
  printf("Enter col:\n");
  scanf("%d",&col);
  
  pattern18(row,col);
  return 0;
}

int pattern18(int row,int col)
{
  int i=0,j=0;
  for(i=1;i<=row;i++)
  {
    for(j=1;j<=col;j++)
    {
      if(i>j)
      {
      printf("* ");
      }
      else
      {
       printf(" ");
      }
   }printf("\n");  
  } printf("\n");
}
