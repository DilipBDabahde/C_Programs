//reverse num
// 321   123

#include<stdio.h>
 int fun(int value)
 {
  int idigit=0,pop=0,rev=0,temp=0;	
    while(value != 0)
    {
      int  pop=value%10;
           temp=rev*10+pop;
           rev=temp;   
           value=value/10;       
    }
   printf("%d\n",rev);
 } 
 
 
 

int main()
 {
   int value;
   printf("Enter value:");
  scanf("%d",&value);
  fun(value);
  return 0;
 }
