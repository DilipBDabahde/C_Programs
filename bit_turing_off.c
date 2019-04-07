//accept num from user and and pos ad off that pos bit
// exampe  1 0 0 0 0 0  0 1 1 1 1
//				    0       index num 3 deactivated								

#include<stdio.h>
#define TRUE 0
#define FALSE 0

int game(int bat,int pose);
int main()
{
  int is,to;
  printf("Enter a num:\n");
  scanf("%d",&is);
  printf("Enter a position\n");
  scanf("%d",&to);
  int ret=game(is,to);
  
   while(ret !=0)
   {
     int st=0;
    st=ret%2;
    if(st==TRUE)
    {
      printf("%d ",st);
    }
    else
    {
     printf("%d ",st);
    }
    ret=ret/2;
   }printf("\n");
  
  return 0;
}

int game(int bat,int pose)
{
   int iplay,ijump;
  
   int imax1=0x1;
   if((pose<1)||(pose>32))
   {
    return bat;
   }
     imax1=imax1 << (pose-1);
    imax1= ~imax1; //tilda operation using
    int result =bat & imax1;  
   return result;

}
