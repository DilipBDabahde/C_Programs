/*  accpet string from user and copy that string into another string
 
  str1="ABCD"
  str2="" empty  make program to copy this  ABCD  into str2 
 
 */
 
#include<iostream> 
#include<stdlib.h>

using namespace std;

 class strcopy
  {
     public:
     void strcpyy(char *str1,char *str2);
     
  };
  
  
int main()
 {
   
   char *ptr1,*ptr2;
   strcopy obj1;
   ptr1=(char*)malloc(sizeof(char));
   ptr2=(char *)malloc(sizeof(char));
   
   cout<<"Enter string To COPY\n";
   cin.getline(ptr1,50);
   
   obj1.strcpyy(ptr1,ptr2);
   return 0; 
 }  
 
 
 
 int strcopy::strcpyy(char *str1,char *str2)
 {
    char *ch1,*ch2;
    ch1=str1;
    ch2=str2;
    
    while(*str1 != '\0') 
      {
        cout<<*str1<<" ";
        str1++;
      }
     
     
    
    
    
    
    
 
 
 }
