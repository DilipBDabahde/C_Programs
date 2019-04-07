//accept one array from user and some other elemts and check array elemts array divisible by last taken nnum

#include<stdio.h>
int divpattern(int *arr,int size,int val1,int val2);

int main()
{
   int size=0,icnt1=0,icnt2=0,i=0
   
   printf("Enter Array size:\n");
   scanf("%d",&size);
   int arr[size];
   
   printf("Enter elents for array:\n");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
   }
   
   printf("Enter two num to check they are divisible with array elemts:\n");
   scanf("%d%d",&icnt1,icnt2);
   
   divpattern(arr,size,icnt1,icnt2);
   
   
   return 0;
}

int divpattern(int *arr,int size,int v1,int v2)
{
   int i=0,iret=0;
   
     for(i=0;i<size;i++)
   {
       if(arr[i]%v1==0)
       {
         printf("%d is div by %d\n",arr[i],v1);
       }
       else if(arr[i]%v2==0)
       {
         printf("%d is div by %d\n",arr[i],v2);
       }
   }
}
