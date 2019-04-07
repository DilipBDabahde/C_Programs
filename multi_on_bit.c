//accpet num from user and toggle multi num 7 10 11 21 29


#include<stdio.h>
#define TRUE 1
#define FALSE 0
int run(int num);
int main()
{
  int aone=0;
  int iplay=0,ijump;
  printf("Enter a value:\n");  
  scanf("%d",&aone);
  
  int ret=run(aone);
  while(ret != 0)
  {
     ijump=ret%2;
      if(ijump==TRUE)
      {
        printf("%d ",ijump);
      }
      else
      {
        printf("%d ",ijump);
      }
      ret=ret/2;
    
  }
    printf("\n");
  return 0;
}  

int run(int num)
{
   int iplay=0,ijump;//								      7    10 11                    21           29	      
   int ilove=0x10100640;  //mask is ready to fight// output 0 0 0 0 0 0 1 0 0 1  1  0  0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 1 
   int result=num ^ ilove;
   
   while(num !=0 )
   {
      ijump=num%2;
      if(ijump==TRUE)
      {
        printf("%d ",ijump);
      }
      else
      {
        printf("%d ",ijump);
      }
     num=num/2; 
  
   }printf("\n");
   return result;
}
