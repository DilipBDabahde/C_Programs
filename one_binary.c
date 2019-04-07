
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int binary(int val);
int main()
{
  int num=0;
  printf("Enter a num:\n");
  scanf("%d",&num);
  binary(num);
  return 0;
}

int binary(int val)
{
  int icnt=0,ijump=0;
  while(val != 0)
  {
    icnt=val%2; 
    if(icnt==TRUE)
    {
      ijump++;
    } 
    val=val/2;
  } 
  printf("%d ",ijump);
  printf("\n");
}
