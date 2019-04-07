//pattern14  accept row from user and  col from user as row-4  col-4
//	* $ $ $
//	$ * $ $
//	$ $ * $
//	$ $ $ *    use cond is if(i==j) {printf("* ")}else{ printf("$ "); }

#include<stdio.h>
int pattern14(int row,int col);
int main()
{
   int row=0,col=0;
   printf("Enter a row\n");
   scanf("%d",&row);
   printf("Enter col:\n");
   scanf("%d",&col);
   pattern14(row,col);
   return 0;
}

int pattern14(int row,int col)
{
   int i=0,j=0;
   
   for(i=1;i<=row;i++)
   {
     for(j=1;j<=col;j++)
     {
       if(j==i )
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
