//accept num from user and check weather bit is on or nots
#include<stdio.h>

int ping(int val);
int main()
{
   int val;
   printf("Enter val:\n");
   scanf("%d",&val);
   ping(val);
   return 0;
   
}

int ping(int val)
{
   int result=0;
   int imask=0x00000008;  // change input as u wish
   result=val & imask;
   if(result==imask)
   {
     printf("TRUE\n");
   }
   else
   {
     printf("fasle\n");
   }

  printf("\n");
}
