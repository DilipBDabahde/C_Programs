//accpet string fromm user and count num of words into strings

#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>

 class Word_count
 {
    private:
    	char *cptr;
    
    public:
    		int wc(char *str);
    		
    public Word_count()
     {
      cout<<"Welcome: to c++ programming\n"
     } 		
 
 };
 
 
 int main()
 {
 
  Word_count obj; 
  cptr=(char *)malloc(sizeof(char));
  
   int iret=obj.wc(cptr);
  cout<<"Total words are "<<iret<<endl; 
 
 }
 
 
 int Word_count::wc(char *str)
  {
     
   int icnt=0;
   
   while(*str !='\0')
   {
      if(*str == ' ')
      {
        icnt++;
      }
      str++;
   }
   return icnt;
  }
