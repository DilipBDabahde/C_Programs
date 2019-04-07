//decimal tobinary conversion
#include<stdio.h>
int main()
{
  int i=0,k,n,c;
  printf("Enter a number for binary:\n");
  scanf("%d",&n);
  printf("we havve binary of n:%d\n",n);

  for(c=8;c>=1;c--)
  {
    k=n>>c;
    if(k & 1)
    {
      printf("1");
    }
    else
    {printf("0");}               ///convertdecusingbit.c
   
  }
  printf("\n");
  return 0;
}
