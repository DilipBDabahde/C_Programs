//
//accpt string from user and print all string in lower case
//  exampe Dilip Dabhade   output=dilip dabhade
//

#include<iostream>
#include<stdlib.h>

using namespace std;
class AZ
 {
   public:
       char all_small(char *str);
 };
 
 int main()
 {
    AZ obj1;
    char *cptr=NULL;
    cptr=(char *)malloc(sizeof(char));
    cout<<"Enter string\n";
    cin.getline(cptr,50);
    obj1.all_small(cptr);
    return 0;
 }
 
 char AZ::all_small(char *str)
 {
    char ch;
    while(*str != '\0')
    {
      if(*str>='a' && *str<='z')
      {
        cout<<*str;
      }
      else if(*str==' ')
      {
        cout<<*str;
      }
      else if(*str>='A' && *str<='Z')
      {
          ch=*str+32;
          cout<<ch;
      }
      str++;
    }
     cout<<endl;
 }
