//using readymade funtion to reverse
#include<stdio.h>

int bigdigit(int val);
 int main()
 {
  int num=0;
  printf("Enter a num :\n");
  scanf("%d",&num);
  bigdigit(num);
  return 0;
 }
 
int bigdigit(int num)   //1911  --> 9
{
   int idigit=0,iret=0,icnt=num;
   
   if(num<0)
  {
    num=-num;
  }
  
  while(num!=0)
  {
      idigit=num%10;
      if(iret<idigit)
      {
       iret=idigit;
      }
      num=num/10;
      
  }
  printf("%d is large dec in %d\n",iret,icnt);


}
