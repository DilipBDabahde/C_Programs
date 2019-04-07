//accept num from user and toggle any bit
//exampe 7bit

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int gun(int num);
int main()
{
   int val;
   printf("Enter val:\n");
   scanf("%d",&val);
   ping(val);
   return 0;
   
}

int gun(int num)
{
  int icnt=0;
  int imask=0x00000040;
  int result=num&imask;
  int val=0; 
  
   while(num !=0)
    {
     val =num%2;
     if(val==TRUE)
      {
       printf("TRUE ");
      }
      else
      {
        printf("FALSE ");
      }
    } printf("\n");
}
