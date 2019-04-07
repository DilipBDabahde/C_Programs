//accept one num from user and print its factors additoon

#include<stdio.h>
int addoffactor(int ivalue);

int main()
{
   int i=0,n=0;
   
   printf("Enter number:\n");
   scanf("%d",&n);
   
   int ret=addoffactor(n);
   printf("----------------------------------\n");
   printf("//%d // is addition of // %d // all factors\n",ret,n);
   printf("----------------------------------\n");
   return 0;
}


  int addoffactor(int ivalue)
  {
     int sum=0,i=0;
     for(i=1;i<=ivalue/2;i++)
  
      {
         if(ivalue%i==0)
         {
           sum=sum+i;
         }
      }
      
      return sum;
  
   
  }
