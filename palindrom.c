//accept num from user and print check it is palindrom or not 
//ex 121 yes 232 yes  ///  4546 not

#include<stdio.h>
int checkpal(int val);
int main()
{
   int val=0;
   printf("Enter a num to check it is palindrom or not:\n");
   scanf("%d",&val);
   int iret=checkpal(val);
   if(iret==val)
    {
      printf("%d Num is palindrom!\n",iret);
    }
    else
    {
      printf("%d Num is not palindrom!\n",iret);
    }
}

int checkpal(int val)
{
  int idigit=0,rev=0;
  
  while(val != 0)
  {
     idigit=val%10;
     rev=rev*10+idigit;
     val=val/10;  
  }
  
  return rev;
  }
