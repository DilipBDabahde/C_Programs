//pattern12   input row=4  col=4
//		  output=  1 2 3 4
//			     1 2 3 4
//			     1 2 3 4
//			     1 2 3 4

#include<stdio.h>
int pattern12(int row,int col);

int main()	//entry point fucntion
{
   int row,col;
   printf("Enter row:\n");
   scanf("%d",&row);
   printf("Enter col:\n");
   scanf("%d",&col);
   pattern12(row,col);
   return 0;
}

int pattern12(int row,int col)
{
  int i=0,j=0;
  for(i=1;i<=row;i++)
  {
    for(j=1;j<=col;j++)
    { 
    t
      printf("%d ",j);    
    }printf("\n");
  }printf("\n");

}
