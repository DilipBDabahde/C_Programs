#include<stdio.h>
 

 int main(int argv, char* argc[])
 {
  int table,i=0;
  int sum=0;
  printf("give me twon nums:");
  scanf("%d",&table);
 
  for(i=1;i<=table;i++)
   {
     sum=sum+i;
    
   }
  printf("%d\n",sum);   
  
  }
