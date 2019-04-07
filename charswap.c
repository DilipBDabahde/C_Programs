//accpet two char from user and swap them

#include<stdio.h>

 int main()
 {
 
  char ch1,ch2,temp;
  
  printf("Enter two chars:\n");
 
  scanf("%c %c",&ch1,&ch2);
  
  printf("before swap %c %c\n",ch1,ch2);

   temp=ch1;
   ch1=ch2;
   ch2=temp;
   
   printf("after swap %c %c\n",ch1,ch2);
  
  return 0;
 }
 
