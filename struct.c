
#include<stdio.h>
int no=14;
 struct demo
  {
    int i,j,k,l;
    
  }obj1={10,20,30,40};
   
 int main()
  {
   printf("%d\n",*(&obj1.i)); 
   
   printf("%d\n",*(&obj1.j));   
   printf("%d\n",*(&obj1.i+1));
   printf("%d\n",*(&obj1.i));
   
  }  
