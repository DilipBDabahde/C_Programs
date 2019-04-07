//accept one num from use and one digit and chek occurance of that digit into number 
//
//  example 9789576  9   ouput 2                  one more   15935546  0   output 0


#include<iostream>
 using namespace std;

class DigOccur
 {
   public:
 	void DigitCount(int val);
 	void Display(int val);
 };
 
 int main()
 {
 
   int val=0,digit=0;
   cout<<"Enter one number\n";
   cin>>val;
   cout<<"Enter one digit\n";
   cin>>digit;
   DigOccur obj1;
   DigOccur obj2;
   
   obj1.DigitCount(val,digit);
 
 }
 
 
 void DigOccur::DigitCount(int num,int digit)
 {
   int icnt=0,count=0;
   while(num != 0)
   {
     icnt=num%10;
     
      if(icnt==digit)
     {
        count++;
     }
     val=val/10;
   }
    Display(count);
 }
 
 void DigOccur::Display(int counter)
 {
   cout<<"Here is Total Occurance\n"<<counter<<"\n";
   
 
 }
