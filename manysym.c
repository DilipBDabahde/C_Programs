
#include<stdio.h>
 int main()
 {
   int row,col;
   printf("Enter row\n");
   scanf("%d",&row);
   
   printf("Enter col\n");
   scanf("%d",&col);
 
   int i=0,j=0;
   
   for(i=1;i<row;i++)
   {
     for(j=1;j<col;j++)
     {
       if(i==j)
       {
        printf("# ");
       }
        else if(j==1 || i==row)
       {
         printf("* ");
       }
       else if(i==1 || j==col)
       {
         printf("& ");
       }
       else if(i>j)
       {
       printf("$ ");
       }
       else if(i<j)
       {
         printf("@ ");
       }
     }printf("\n");
   }printf("\n");
   
 }
