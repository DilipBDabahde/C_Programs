
#include<stdio.h>
#include<stdlib.h>

int Bin_Search(int arr[],int Lchild,int Rchild,int value);

int main ()
 {
    int arr[]={14,5,2,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int location=5;
    
    
    int iret=Bin_Search(arr,0,n-1,location);
    
    if(iret==-1)
     {
       printf("Incorrcorrect source\n");
     }
     else
     {
       printf("index num of given location is %d\n",iret);
     } 
 }
 
 int Bin_Search(int arr[],int Lchild,int Rchild,int value)
  {
                               //{14,5,2,4,7};  5
  
    if(Rchild >= Lchild)
     {
       
       int center=Lchild+(Rchild-Lchild)/2;
       
       if(arr[center]==value)
       {
         return center;
       }
       if(arr[center]>value )
       {
         return Bin_Search(arr,Lchild,Rchild-1,value);
       }
       
        return Bin_Search(arr,Lchild,Rchild+1,value);     
     }
  
  
    return -1;
  
  }
