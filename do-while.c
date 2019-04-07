
#include<iostream>
using namespace std;

class Ax
{
  public:
    void Ax_pat(int r,int c);
};

 int main()
 {
   int i,ii;
   Ax obj;
   cout<<"Enter row_sizze:";
   cin>>i;
   cout<<"Enter col_size:";
   cin>>ii;
   Ax_pat(i,ii);
   return 0; 
 }
 
 void Ax::Ap_pat(int r,int c)
 {
    int i=1,j=1;
    
    do{
         j=1;
         while(j<=i)
         {
           cout<<"* ";
           j++;
         } cout<<endl;
         i++;    
      }while(i<=row);
      
      cout<<endl;
 
 
 
 }
