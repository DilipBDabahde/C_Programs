//accept num from user convert itinto binary if num is 1 show true else false

#include<stdio.h>
#define true 1
#define false 0

char *arr[]={"false","true"};
int binary(int val);

int main()
{
   int val=0;
   printf("Enter a num\n");
   scanf("%d",&val);
   binary(val);
   return 0;
}

int binary(int val)
{
  int icnt=0;
  while(val != 0)
  {
     icnt=val%2;
     printf("%s[%d] ",arr[icnt],icnt);
     val=val/2;
  }
  printf("\n");
}
