#include<stdio.h>

 int main()
 {
 
     int arr[6]={1,5,8,3,2,6};
     
     int istart=0,iend=0;
     for(istart=0,iend=6-1;istart<iend;istart++,iend--)
     {
       int sum=arr[istart]+arr[iend];
      {
       printf("%d is add of %d %d\n",sum,arr[istart],arr[iend]);
     }
 }
   return 0;
 
 }
