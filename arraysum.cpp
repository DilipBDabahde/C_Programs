//crete dynamic array and make addition of all array elements
/*
  int arr[5]= 4 6 8  44 1
  sum=63


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Arraysum 
 { 
     public:
    int arrsum(int *arr,int size);
  
 };
 
 int main()
 {  
 
    Arraysum obj;
    int size=0;
    cout<<"enter array size\n";
    cin>>size;
    
    int arr[size];
    cout<<"Enter values into array\n";
    for(int i=0;i<size;i++)
     {
       //cin.getline(arr,size);     
       scanf("%d",&arr[i]);
     }
     
     int iret=obj.arrsum(arr,size);
     if(iret==0)
     {
      cout<<"wrong choice\n";
     }
     else
     {
      cout<<"totalis "<<iret<<endl;
     }
     return 0;  
 } 
 
 
 
 int Arraysum::arrsum(int *arr,int size)
  {
    int i=0,sum=0;
    
    for(int i=0;i<size;i++)
    {
       sum+=arr[i];    
    }  
    return sum;  
  }
  
  
  #include<iostream>
  #include<stdlib.h>
  #include<stdio.h>
  
  using namespace std;
  
  int main()
  {
    int i=0,n=0,sum=0;
    cout<<"enter lengh\n";
    cin>>n;
    int *val=NULL;
    val=(int *)malloc(n*sizeof(int));
    cout<<"Enter values\n";
    for(i=0;i<n;i++)
     {
        scanf("%d",&val[i]);
        sum+=val[i];
     }
     cout<<"total is\n"<<sum<<endl;
     delete val;
  } 
  */ 
   
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

  int size=0,sum=0;
  int *ptr=NULL;
  printf("Enter array size\n");
  scanf("%d",&size);
  ptr=(int*)malloc(size*sizeof(int));
  
  printf("Enter %d value\n",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",&ptr[i]);
    sum+=ptr[i];
  }
  printf("\n%d is total\n",sum);
  free(ptr);
  return 0;
}
