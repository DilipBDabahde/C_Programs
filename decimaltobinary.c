//accept decimul from user and convert it into binary

#include<stdio.h>
#include<stdlib.h>
void br(int n);
 int main()
 {
 
   
   int n=0;
   
   printf("Enter a decimal to convert its binary:\n");
   scanf("%d",&n);
  
  
   br(n);
    return 0;
     
  }
  
  void br(int n)
  {
    int i=0;
    int arr[]={0};
  for(i=0;n>0;i++)
     {        
        arr[i]=n%2;
        n=n/2;        
     }     
     printf("your binary number is:->>>  ");
     for(int j=i-1;j>=0;j--)
     {
         printf("%d ",arr[j]);
     }
  
  }
