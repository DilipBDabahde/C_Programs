//c++ program to show big indianness

#include<iostream>
using namespace std;

 int bigendianess(int no);
 int main()
 {
   int val=0;
   cout<<"Enter a num to check its bigendianess\n";
   cin>>val;
   bigendianess(val);
   return 0; 
 }
 
 
 int bigendianess(int no) 
  {
    int no1,no2,no3,no4;
    
    int result=0;
    
    no1=0xff000000;
    no2=0x00ff0000;
    no3=0x0000ff00;
    no4=0xff0000ff;
    
    result=no1 | no2 | no3 | no4;
    
    cout<<"here is --->"<<result<<endl;
  
  
  }
