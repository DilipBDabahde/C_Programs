////////////////////////////////////////////////////////////////////////////////////////////
//in below program we take input from user and send addrsss to function from make and hold that address into ptr and changing
//value as per our need in program
//
//
//
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void fun(int x,int *ptr,int *brr);
 int main()                                   //paramter_use_as_ptr_in_c.c
 {
    int x=10;
    int y=0;
    int z=20;
    
    fun(x,&y,&z);  // fun(10,y-address,z-address)
    
 
 }
 
void  fun(int x,int *ptr,int *brr)
{
  
 *ptr=11;   
 printf("%d\n",*ptr);
 (*brr)++;
 printf("%d\n",*brr);


}
