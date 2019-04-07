//find array index, take array from user and one another elemetn and check index of element into array & return
//finding_array_index.c
//////////////////////////////////////////////////////////////////////////////////
// in this program we take array  as well as one num and print index of that number 
//    index:      0  1  2  3  4     
//  example: arr[10,20,30,40,50];   if we enter 30 then we will get index number 2
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int findindex(int *arr,int size,int icnt);
 int main()
 {
   int i=0,size=0,icnt=0;
   printf("Enter array size:\n");
   scanf("%d",&size);
   int brr[size];
   
   printf("Enter %d elemts into array:\n",size);
   for(i=0;i<size;i++)
   {
     scanf("%d",&brr[i]);
   }
   
   printf("Enter one Element to search its index into array:\n");
   scanf("%d",&icnt);
  int holdme=findindex(brr,size,icnt);
   if(holdme>=0)
     {
       printf("Index of given num is %d\n",holdme);
     }else
     {
       printf(" Invalid hit!\n check it again!\n");
     }
   return 0;
 }
 
 
int findindex(int *arr,int size,int icnt)
{
  int i=0,val1=0,val2=0,s=-1;
  
  for(i=0;i<size;i++)
  {  
    s++;
    if(arr[i]==icnt)
    {
    break;    
    }
  }
    if(i==size)
     {return -1;}
     else
     {
      return i;
     }
} 
