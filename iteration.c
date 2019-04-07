//accept 2 nums from user and iterate
// 5 4
// output 1 5 9 13 17
//

#include<stdio.h>
#include<stdlib.h>
int help(int *val,int *add);
int main()
 {
   int *i,*j;
   
   i=(int *)malloc(sizeof(int));
   j=(int *)malloc(sizeof(int));
   
   printf("Ener first value\n");
   scanf("%d",i);
   
   printf("Enter secnd value\n");
   scanf("%d",j);
   
   help(i,j);
   return 0;
 }
 
 int help(int *val,int *add)
 {
    int i=1,j=1;
    
    for(i=1;i<=*val;i++)
     {
        if(j%2 != 0)
        {
          printf("%d ",j);
        }
         j=j+*add;        
     }
     printf("\n");
 }
