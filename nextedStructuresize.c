//steps to check size of nested structure

#include<stdio.h>

  int main()
  {
  
  
   struct Demo
   { 
     
     int d;   
    double i;
     
     
   struct hello
   {
     int s;
     int st;   
    
    
    struct ram
    {
      char ch;
    }gst;
    
    
   }ggg;
        
   }; struct Demo dobj;
   
     
     printf("%ld\n",sizeof(dobj.ggg.gst));


  
 
  return 0;
  }
