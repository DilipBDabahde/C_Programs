//accept num from user and toggle any bit 
//exampe 7bit   {{ important program }}
// input 172   1 0 1 0 1 1 0 0
//		   8 7 6 5 4 3 2 1   ==targeted is 7
//output =	   1 1 1 0 1 1 0 0
//		     =

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int gun(int num);
int main()
{
   int val=0,ival=0;
   printf("Enter val:\n");
   scanf("%d",&val);
  int ret=gun(val);
   
    while(ret !=0)
    {
     ival =ret%2;
     if(ival==TRUE)
      {
       printf("%d ",ival);
      }
      else
      {
        printf("%d ",ival);
      }
      ret=ret/2;
    } printf("\n");   
   return 0;  
}
int gun(int num)
{
  int icnt=0;
  int imask=0x00000040;
  int result=num ^ imask;
  int val=0; 
  
   while(num !=0)
    {
     val =num%2;
     if(val==TRUE)
      {
       printf("%d ",val);
      }
      else
      {
        printf("%d ",val);
      }
      num=num/2;
    } printf("\n");
    return result;
}
