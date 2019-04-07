#include<stdio.h>
void evenfact(int num)
{
  int i=0,fact=1,sum=0;
  int rum;
  if(num<0)
  {
    num=-num;
  }
  
  for(i=1;i<=num;i++)
  {
    if(i%2==0)
    {
    fact=fact*i;
    }
    {
      sum=fact;
    }
   
  }

  {
  printf("%d is even factorial of given num %d\n",sum,num);
  }
 
} 

int main()
{
   int i=0,num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   evenfact(num);
   return 0;
}
