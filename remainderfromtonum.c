// accept num from user and return sumfactor and nonfactor
#include<stdio.h>
void total(int value);
 int main()
 {
  int i;
  printf("Enter a num:\n");
  scanf("%d",&i);
  total(i);
 
 }
 
 void total(int value)
 {
 
   int sum=0,temp=0,i=0;
   
   for(i=1;i<=value;i++)
   {
     if(value%i==0)
     {
        sum=sum+i;     
     }
     else if(value%i !=0)
     {
       temp=temp+i;     
     }   
   }
   
   int tot=temp-sum;
   
   printf("%d is sumfact and nonsumfact %d %d",tot,temp,sum);
   
  }
