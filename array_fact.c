#include<stdio.h>
 int main()
 {
   int size=0,i=0;
   printf("Enter array size\n");
   scanf("%d",&size);
   int arr[size];
   printf("Enter elemts into array\n");
   for(i=0;i<size;i++)
      {
        scanf("%d",&arr[i]);
      }
  printf("These are factors of Array elemts below\n");    
  for(i=0;i<size;i++)    
   {
      printf("\n%d ===>>",arr[i]);
        for(int j=1;j<=arr[i];j++)
      {
           if(arr[i]%j==0)
           {
             printf("%d ",j);
           }
      }
      printf("\n");
   }
   printf("\n");
 }
