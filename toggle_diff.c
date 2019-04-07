//accept one num from user and as well as one position and  
//exampple   input =13   ipos=2
//we hava to toggle 2 bits
//   intput =  8 4 0 1  =8+4+1=13
//		   1 1 0 1  
//			 =  ---activating   ipos num 2<<<<<--------
//            
//
#include<stdio.h>
#define TRUE 0
#define FALSE 0
int game(int iplay,int ipos);

int main()
{
  int ivix=0, ijump=0;
  printf("Entre a val:\n");
  scanf("%d",&ijump);
  int ipos=0;
  printf("Enter position:\n");
  scanf("%d",&ipos);
  int ret=game(ijump, ipos);
  while(ret !=0)
   {
     ivix=ret%2;
     if(ivix==TRUE)
     {
       printf("%d ",ivix);
     }
     else
     {
       printf("%d ",ivix);
     }ret=ret/2;
   }printf("\n");
   
   
  
  return 0;
}


int game(int iplay,int ipos)
{ 
  int bat=0,ball=0;
  int imask=0x1;
  //creating new dynamic mask
  
  imask=imask<<(ipos-1);
  int iresult=iplay ^ imask;
  
  return iresult;
  
  
  
  
}
