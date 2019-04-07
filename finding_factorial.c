// 6 output 48   // input 4 output 8
#include<stdio.h>
 int finding_fact(int val)
 {
    int i=0,fact=1;
    if(val<0)
    {
     return 0;
    }
    
    i=val;
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    return fact;
}
 int main()
 {
   int i=0,fact=0,num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   fact=finding_fact(num);
   printf("%d is factorial of %d\n",fact,num);
   return 0;
 }
 
 
