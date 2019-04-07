//accept input from user and print output in given format
//example  input=5
//	     output=1 5 9 13 17
	    
#include<stdio.h>	    
int by4(int no);
int  main()
{
   int i=0,ino=0;
   printf("Enter a num\n");
   scanf("%d",&ino);
   
   by4(ino);
   return 0;
}

int by4(int no)
{
  int i=1,k=1;
  while(i<=no)
  {
    printf("%d ",k);
    k=k+4;
    i++;
  }
  printf("\n");
}
