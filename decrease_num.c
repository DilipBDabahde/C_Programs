//accept num from user and print this pattern
//  input=1597
//  output= 7 - - - 
//		7 9 - - 
//		7 9 5 -
//		7 9 5 1

#include<stdio.h>
#include"sss.h"
BOOL pattern20(BOOL num);
BOOL main()
{
   BOOL num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   pattern20(num);
   return 0;
}
BOOL pattern20(BOOL num)
{
 BOOL i=0,j=0,icnt=0,temp=num;
 if(num < 0)
  {
    num=-num;
  }
  
  while(num != 0)
   {
     num=num/10;
     icnt++;
   }
   num=temp;
   printf("icnt value is 		%d\n",icnt);
   
   for(i=1;i<=icnt;i++,num=temp)
   {
     for(j=1;j<=i;j++,num=num/10)
     {
       printf("%d ",num%10);
     }printf("\n");
   }printf("\n");
  
}
