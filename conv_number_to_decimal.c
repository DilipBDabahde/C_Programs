//conv_number_to_decimal.c
//input 1254 output=4  // input 45 output-2
#include<stdio.h>
void convnumtodec(int val)
{
   int i=0,sum=0,icnt=1;
   
   while(icnt<=val)
   {
       
       val=val/10;
       icnt++;

   }
  printf("total decimal are %d\n",icnt);
}

int main()
{
   int num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   convnumtodec(num);
   return 0;
}
