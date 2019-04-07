//accept one num from user and print except even till given num
//
// int ino=5	output=1 3 5


#include<stdio.h>
int onlyodd(int odd);
int  main()
{
 int ino=0;
 printf("Enter a num\n");
 scanf("%d",&ino);
 onlyodd(ino);
 return 0;
}

int onlyodd(int odd)
{  int ino=1;
   if(odd<0)
   {
     odd=-odd;
   }
   
  /* while(ino<=odd)
   {
      if(ino%2 !=0)
      {
        printf("%d ",ino);
      }
      ino++;	
   }*/
   int i=1;
   for(i=0;i<(odd*2)/2;i++)   
    {
      if(i%2==0)
      {
      printf("%d ",i);
      }
      
    }  
   printf("\n");
}
