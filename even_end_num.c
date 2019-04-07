//accept array from user and print such elemts who ends with even
// 
//  int arr[5]={52,99,68,73,46};   output =   52 68  46
//

#include<iostream>
using namespace std;

class EvenEnd
  {
    public:   
     void EvenEnd()
     {
       cout<<"Hi WE ARE LEANING\n";
     }
     
     void even_end(int *arr,int length);
  };  
  
  
  int main()
  {
    int SIZE=0,i=0;
    cout<<"Enter array size\n";
    cin>>SIZE;
    
    int arr[SIZE];
    cout<<"Enter array elemts\n";
    for(i=0;i<SIZE;i++)
    {
       cin>>arr[i];    
    }
    
    even_end(arr,SIZE);
    return 0;  
  }
  
  void EvenEnd::even_end(int arr[],int length)
  {
      int icnt=0,i=0;
      cout<<"\nThese Nums ends with even\n";
      for(i=0;i<length;i++)
      { 
          icnt=arr[i]%10;
          if(icnt%2==0)
          {
            cout<<arr[i]<<" ";
          }
      }
      cout<<endl;
  }
