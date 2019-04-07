#include<stdio.h>
void send(int ino);
int main()

{
  int i,n;
  
  printf("Enter a num:\n");
  scanf("%d",&n);
  
  send(n);
}

void send(int ino)
{
   int fact=1,i=0;
   
   if(ino<=0)
   {
     printf("invalid input\n");
   }
   
   
    for(i=1;i<=ino;i++)  
    {
        fact=fact*i;    
         printf("%d\n",fact);
    }

   
   



}
