//accept num from user and return even odd factorial diff  
//  input 6   1 2 3 4 5 6    1*3*5=15<--odd  even-->2*4*6=48

#include<stdio.h>

 int mix(int val);
 
 int main()
 {
   int num;
   printf("Enter a num\n");
   scanf("%d",&num);
   int ret=mix(num);
   printf("%d is is diff\n",ret);
   return 0;
 }
 
 int mix(int val)
 {
   int i=1,fact=1,icnt=1;
   
   while(i<=val)
   {
     if(i%2==0)
     {
       fact=fact*i;
     }
     else if(i%2 !=0)
     {
       icnt=icnt*i;
     }
     i++;
   }
   printf("even is %d\nodd is %d \n",fact,icnt);
   int total=icnt-fact;
   return total;
 }
