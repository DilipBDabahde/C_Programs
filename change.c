
#include<stdio.h>

void add_sub(int *ival1,int *ival2)
{
   int ival=*ival1+*ival2;
   int val=*ival1-*ival2;
    
   *ival1=ival;
   *ival2=val;
}

 int main()
 {
   int i=0,j=0;
   printf("Enter fist value\n");
   scanf("%d",&i);
   
   printf("Enter second value\n");
   scanf("%d",&j);
   add_sub(&i,&j);
   if(i<0)
   {
    i=-i;
   }
   if(j<0)
   {
    j=-j;
   }
   printf("%d \n%d\n",i,j);
   
 }
