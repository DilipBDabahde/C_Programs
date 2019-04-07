
//intput 	=5
//output	=-5 -4 -3 -2 -1 0 1 2 3 4 5 

#include<stdio.h>
int main()
{
  int no=0,i=0;
  printf("Enter a num:\n");
  scanf("%d",&no);
  int val=no;
  i=-val;
  while(i<=no)
  {
    printf("%d ",i);
    i++;
  }
}
