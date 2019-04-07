//accept string from user and print count freq of small character

#include<iostream>
#include<stdlib.h>

using namespace std;

class ABC
 {
   public:
     char Count_small_char(char *str);
 };
 
 int main()
 {
   ABC obj1;
   char *cptr=NULL;
  
   cptr=(char *)malloc(sizeof(char));
   cout<<"Enter string\n";
   cin.getline(cptr,50);
   obj1.Count_small_char(cptr);
   return 0;
 }
 
 char ABC::Count_small_char(char *str)
 {
  int icnt=0;
  while(*str != '\0')
   {
     if(*str>='a' & *str<='z')
     {
       icnt++;
     }
     str++;
   }
   cout<<"total small characterse we found :\n"<<icnt<<endl;
 }
