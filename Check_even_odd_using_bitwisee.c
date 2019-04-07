//accept num from user and check given num is odd or even without using % / oepratior

#include<iostream>
using namespace std;

 int withbitwise(int ino)
 {
   if((ino % 1)==1)
    {
      cout<<"ODD"<<endl;
    }
    else
    {
      cout<<"EVEN"<<endl;
    }
    
 
 }
 
 int main()
 {
 
  int value=0;
  cout<<"Enter anum to check it is even or odd"<<endl;
  cin>>value;
  
  withbitwise(value);
 
  return 0;
 
 
 }
