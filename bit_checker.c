//accept num from user and check 4th bit is on 
// exa : input= 22
//	   
//
//
//
//

#include<stdio.h>
typedef unsigned int UINT;

UINT Onbit(UINT ino)
{
  UINT mask=1;
  UINT Result=0;
  Result=ino | mask;
  return Result;
}

int main()
{
    UINT value=0,ret=0;
    int bret=0;
   printf("Enter a num:\n");
   scanf("%d",&value);
   
   ret=Onbit(value);
   printf("%u\n",ret);
      
}

