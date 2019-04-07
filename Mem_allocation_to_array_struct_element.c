//steps to avoid padding in c structure 
#include<stdio.h>
//#pragma pack(1)
  int main()
  {
  
   struct Demo
   {
     char i;
     int j;
     float f;
   };
      struct Demo arr[2];
      
      arr[0].i=10;
      
      printf("%d\n",arr[0].i);
      
      
      
  return 0;
  }
