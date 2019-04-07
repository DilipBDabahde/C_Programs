//accept 2 num from user and print inbetween range of them

#include<stdio.h>
int main()                        //findevenbet2num.c
{
  int x,y,z;
  
  printf("Enter two number:\n");
  
  printf("Enter first number:\n");
  scanf("%d",&x);

   printf("Enter second number:\n");
   scanf("%d",&y);  //printrangebet.c
   
 
  
   for(int i=x;i<=y;i++)
    {
        if(i%2==0)
      printf("%d ",i);
    }
      
 }  
