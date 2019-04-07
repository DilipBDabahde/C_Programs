#include<stdio.h>

  int main()
  {
  
  
   struct Demo
   { 
     
     int d;
     char ch;
     float ft;
   
   }; struct Demo obj; 
   
   
  
   printf("Total Size of structure -> :%ld\n",sizeof(obj)); 
   printf("Acutal used size is ->:%ld\n",sizeof(obj.d)+sizeof(obj.ch)+sizeof(obj.ft));
   
    
   int used=sizeof(obj.d)+sizeof(obj.ch)+sizeof(obj.ft);
   printf("Used memory from structure -> :%d\n",used);
   
   int total=sizeof(obj);
 
   int padding=total-used;
   
   printf("Structure  padding %d\n",padding);
 
  
  return 0;
  }
