//wap in given format 	take one input from user and print 
//
// input  =5  output= 1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
int forrev(int no);
int main()
{
   int no1=0;
   printf("Enter a num:\n");
   scanf("%d",&no1);
   forrev(no1);
   return 0;
}

int forrev(int icnt)
{
   int i=1,k=1;
   while(i<=icnt)
   {
     printf("%d ",i);
     i++;   
   }
   
   while(icnt >=k)
   {
     printf("%d ",icnt);
     icnt--;
   }
   printf("\n");

} 
