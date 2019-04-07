//accept num from user and reverse only even num of ginve num ex 1256 62 // 4564 464
#include<stdio.h>

int main()
{
  int num=0,digit=0,rev=0;
  
  printf("Enter a num to print only rev of even:\n");
  scanf("%d",&num);
  int sand=num;
  if(sand<0)
  {
    sand=-sand;
  }
  
  while(sand!=0)
   {
      digit=sand%10;
      if(digit%2==0)
      {
      rev=rev*10+digit;
   	}
   	sand=sand/10;
   }
    printf("%d is reverse of %d\n",rev,num);
    
    return 0;
}
