//accept num from user as well as decimal num and check decimal into num and return true or false
//ex 123 4 false  // 333442 2 true

#include<stdio.h>
 int checkDec(int val,int dec)
 {
    int sum=0,iret=0,icnt=0;
    
    if(val<0 )
   {
     val=-val;     
   }
   

  for(int i=val;i>0;i--)
   {
     sum=i%10;
     if(sum==dec)
     {break;}
     i=i/10;
   }
   
    if(val==0)
    {
       printf("FALSE\n");
    }
    else
    {
      printf("TRUE\n");
    }
   
 }
 
 int main()
 {
    int i=0,j=0;
    
    printf("Enter a Number:\n");
    scanf("%d",&i);
    printf("Enter decimal:\n");
    scanf("%d",&j);
    checkDec(i,j);
   return 0;
 
 }
