//accept one num from user and as well as one position and toggle its bits
// if bit is on make it off

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int fun(int game,int pose);
int main()
{

  int st=0,bus=0;
  printf("Enter a value:\n");
  scanf("%d",&st);
  printf("Enter position\n ");
  scanf("%d",&bus);
  int ret=fun(st,bus);
  int fb=0;
  while(ret!=0)
 {
   fb=ret%2;
   if(fb==TRUE)
   {
    printf("%d ",fb);
   }
   else
   {
    printf("%d ",fb);
   }
   ret=ret/2;
 }printf("\n");

	return 0;
}

int fun(int game,int pose)
{

  int iplay,ijump;
  int mask=0x1;
  mask=mask << (pose-1);
  int result=game ^ mask;
  return result;

}
