#include<stdio.h>
void diffevenodd(int val)
{
  int i=0,fact=1,icnt=1;
  
  if(val<0)
  {
    val=-val;
  }

  for(i=1;i<=val;i++)
  {
     if(i%2==0)
     {
        fact=fact*i;
     }
     else if(i%2 !=0)
     {
       icnt=icnt*i;
     }
  }
  
 int iret=fact-icnt;
  printf("%d for fact even\n",fact);
  printf("%d for icnt odd\n",icnt);
  printf("%d is diff between even and odd \n",iret);
 
}

int main()
{
  int num;
  printf("Enter a Num:\n");
  scanf("%d",&num);
  diffevenodd(num);
  return 0;
}
