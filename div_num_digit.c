//accept num from user and print total digit into number

#include<stdio.h>
int dig(int val);

 int main()
 {
 
  int num;
  printf("Enter a value\n");
  scanf("%d",&num);
  dig(num);
  return 0; 
 }
 
 int dig(int val)
 {
   if (val==0)
   {
     return 0;
   }
   
   int i=0;
   int icnt=0;
   
   while(val !=0)
   {
      int ival=val%10;
      if(ival !=0)
      {
       icnt++;
      }
      val=val/10;      
   }
   printf("%d \n",icnt);
 
 }
 
 
 
