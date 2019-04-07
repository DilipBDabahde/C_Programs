//accept input from user row & col
//  input 		row=5   col=5
//output		$ $ $ $ $
//			* * * * * 
//		 	$ $ $ $ $
//			* * * * * 
//			$ $ $ $ $

#include<stdio.h>
int pattern11(int row,int col);
int main()
{
  int row=0,col=0;
  
  printf("Enter row:\n");
  scanf("%d",&row);
	 
  printf("Enter col:\n");	 
  scanf("%d",&col);
  pattern11(row,col);

  return 0;

}

int pattern11(int row,int col)
{
  int i=0,j=0;
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       if(i%2 ==0)
       {
          printf("$ ");
       }
       else
       {
         printf("* ");
       }
     }printf("\n");
  }
  printf("\n");

}
