//pattern16  accept row and col from user and print below output
//  row=5      col=5
//  output 1 2 3 4 5
//	     A B C D E
//	     1 2 3 4 5
//	     A B C D E
//	     1 2 3 4 5

#include<stdio.h>
int pattern16(int row,int col);
int main()
{
   int row,col;
  
   
   printf("Enter a row:\n");
   scanf("%d",&row);
   printf("Enter col:\n");
   scanf("%d",&col);
   printf("\n");
   pattern16(row,col);
   return 0;
}

int pattern16(int row,int col)
{
   char ch='A';
   int i=0,j=0;
   for(i=1;i<=row;i++)
   { 
     ch='A';
     for(j=1;j<=col;j++)
      {
        if(i%2==0 && j<=row)
        {
          printf("%c ",ch++);        
        }        
        else if(j<=row)
        {
          printf("%d ",j);
        }      
      }printf("\n");
   }printf("\n");
   		
}


