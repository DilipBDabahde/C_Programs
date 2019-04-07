//accept one num from user and make addition of all digits recursively and return it to main
#include<stdio.h>

int Rec(int ival)
 {
    static int Sum=0;
    
    if(ival != 0)
     {
        Sum +=ival%10;
        ival=ival/10;
        
     Rec(ival);
     }
   
  return Sum; 
 }
 	
 
 int main()
 {
   int ino=0;
   printf("Enter a value\n");
   scanf("%d",&ino);
   int iret=Rec(ino);
   printf("%d is total\n",iret);
   return 0;
 }
