//steps to avoid padding in c structure 
#include<stdio.h>
#pragma pack(1)
  int main()
  {
  
  
   struct Demo
   { 
     int i;
     char c;
     float f;
     
   }obj;  


     


     printf("Total Struct Size ->: %ld\n",sizeof(obj));
     printf("Totoal Used Size  ->: %ld\n",sizeof(obj.i)+sizeof(obj.c)+sizeof(obj.f));     
     

  return 0;
  }
