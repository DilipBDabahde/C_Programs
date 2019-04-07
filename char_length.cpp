

#include<iostream>
#define size 50
using namespace std;
 
 class ChaCnt
  {
     public:
      void char_cnt(char *str,char ch);
   
  };
  
  int main()
  {
    ChaCnt obj1;
    char arr[size],ch;
    cout<<"Enter string\n";
    cin.getline(arr,size);
    
    cout<<"Enter one char to check its frequency into string\n";
    cin>>ch;
    obj1.char_cnt(arr,ch);
    return 0;
  }
  
  void ChaCnt::char_cnt(char *str,char ch)
  {   int icnt=0;
      while(*str != '\0')
    {
       if(*str==ch)
       {
       icnt++;
       }
       str++;    
    }
    if(icnt>0)
    {
    cout<<"WE FOUND "<<icnt<<" TIMES IN STRING"<<endl;  
    }
    else
    {
      cout<<"Wrong Choice!\n";
    }  
  }  
