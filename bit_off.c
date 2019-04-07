//take input from user and make on mask to turn of a perticular bit and print differnce
// example: input 13 ---->> binary = 1  1  0  1
//					       8  4  0  1 = consider only true=8+2+0+1
//
//  mask designing= mask=0xfffffff4;  --> here we are keeping of 4 as bit informat     ex  8 [4] 2 1
//
//
#include<stdio.h>
int bit(int num);

int main()
{
 int ival=0;
 printf("Enter a num\n");
 scanf("%d",&ival);
 printf("before send value is--->> %d\n",ival);
 int iret=bit(ival);
 printf("after send val is --->>%d\n",iret);
 return 0;
}

int bit(int num)
{
  int icnt=0;
  int mask=0xfffffff4;
  int result=0;
  result=num&mask;
  return result;
}
