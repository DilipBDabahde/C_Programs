//accept string from user and toggle alternative number

#include<stdio.h>
#define TRUE 0
#define FALSE 1

int game(int iplay);
int main()
{
  int ijump,iplay;
  printf("Entera num:\n");
  scanf("%d",&ijump);
  int ret=game(ijump);
  
  while(ret != 0)
   {
     iplay=ret %2;
     if(iplay==TRUE)
     {
       printf("%d ",iplay);
     }
     else
     {
       printf("%d ",iplay);
     }ret=ret/2;
   }printf("\n");
}

int game(int iplay)
{
  int ijump=0;
  int mask=0x000000dc;
  int result=iplay ^ mask;
  while(iplay!=0)
  {
     ijump=iplay%2;
     if(ijump==TRUE)
     {
      printf("%d ",ijump);
     }
     else
     {
       printf("%d ",ijump);
     }
     iplay=iplay/2;
  }printf("\n");
  
}
