//accept num from user convert it into biinary and print its output if we fount 1 print TRUE or if we found 0 print FALSE
///  exa:  input =13   output TRUE FALSE TRUE TRUE
//					 1    0     1    1

#include<stdio.h>					 
#define TRUE 1
#define FALSE 0

int tfbinary(int num){  
   int inum=num;
   int ival=0;
   printf("we get output in mirror form\n");
   while(num != 0)
   {
      ival=num%2;
      if(ival==TRUE)
      {
        printf("TRUE[%d] ",ival);
      }else
      {
       printf("FALSE[%d] ",ival);
       }
       num=num/2;
       	
   }printf("\n");

 ///////////////////////////////////////////////  
 
 /*  int mask=0xfffffff7;
   int result=0;
   //result=num & mask;
   int RD=0;
   while((inum & mask)!= 0)
    {
      RD=inum%2;
      if(RD==TRUE)
      {
        printf("TRUE[%d] ",RD);
      }
      else
      {
       printf("FALSE[%d] ",RD);
       }
       inum=inum/2;
    }printf("\n");
   */
}	

int main()
{
   int oneval=0;
   printf("Enter a num:\n");
   scanf("%d",&oneval);
   tfbinary(oneval);
   return 0;
}
					  					 
