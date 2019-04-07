//wap which print given output
//exa   input=4   output= -4 -3 -2- -1  0 1 2 3 4

#include<stdio.h>
int fun(int no);

int main()
{
   int no=0;
   printf("Enter a num\n");
   scanf("%d",&no);
   fun(no);
   return 0;
}

int fun(int no)
{  
   int i=0;
 
  
  for(i=-no;i<=no;i++)
  {
    printf("%d ",i);
  }
}
