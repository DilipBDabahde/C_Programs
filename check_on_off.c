//accept num from user and check its 17 bits in on or not
//input 67612 

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int fun(int num);
int main()
{
   int oneval=0;
   printf("Enter a num:\n");
   scanf("%d",&oneval);
   fun(oneval);
   return 0;
}
					  					 
int fun(int num)
{
   int icnt=0;
   while(num !=0)
   {
       icnt=num%2;
       if(icnt==TRUE)
     {
       printf("%d ",icnt);
     }
     else
     {
      printf("%d ",icnt);
     }
     num=num/2;
   }
   
   int mask=0xfff0f819;
   int result= num & mask;
   while(num != 0)
    {
      icnt=num%2;
      if(icnt==TRUE)
      {
        printf("%d ",icnt);
      }
      else
      {
       printf("%d ",icnt);
      }
      
    }printf("\n");
}
