//accept num from user and check that num is prime of not

#include<stdio.h>
 int chkprime(int no);

 int main()
 {
   int i=0;
   
   printf("Ennter a num:\n");
   scanf("%d",&i);
   
    

   int iret=chkprime(i);

   
   if(iret==i)
   {
     printf("%d is prime number\n",i);
   }else
   {
     printf("%d is not prime number\n",i);
   }
   return 0;
 
 }
 
 
 
 int chkprime(int no)
 {
   int i=1;
   int tem=no;  
   if(no<=0)
   {return 0;}
   
   else
   {
     for(i=2;i<=no;i++)
     {
       if(no%i==0)
       {
         return i;
       } 
        
   }
   
   
 }
}
