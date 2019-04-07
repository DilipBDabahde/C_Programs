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
      
      printf("%ld\n",sizeof(arr));
    
      
      printf("%ld\n",sizeof(arr[0]));
   
      
      printf("%ld\n",sizeof(arr[1]));
  return 0;
  }
