//accept num from user and show add of given num ex 125 =8 1+2+5
#include<stdio.h>
void sumofnum(int val)
{  
   int icnt=0,sum=0,i=0;
   
   if(val<0)
   {
     val=-val;
   }
   
 for(i=val;i>=0;i--)                    /////way 1
   {
      int iret=val%10;
        sum=sum+iret;
        val=val/10;    
   }
   /*
   i=1;
   while(i<=val)				 /// way 2
   {
      int iret=val%10;
      sum=sum+iret;
      val=val/10;
   }*/
   
   printf("%d is add of num %d\n",sum,val);
}

int main()
{
   int num=0;
   printf("Enter a num:\n");
   scanf("%d",&num);
   sumofnum(num);
   return 0;
}
