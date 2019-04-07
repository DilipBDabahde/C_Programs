//accept two num from user and display input in reverse order of the between range  + showing odd num
////reverseprintbetrange.c  
#include<stdio.h>

 int main()
 {
   int i=0,j=0,k=0;
   int sum=0;
   printf("Enter two num :\n");
   printf("Enter first num :\n");
   scanf("%d",&k); 
   
   printf("Enter second num :\n");
   scanf("%d",&j);   
   
   if(k<=0 && j<=0)
   {
      printf("Sorry! change your input source and destination:\n");
   }
   
   for(i=j;i>=k;i--)
    {
        printf("%d ",i);
    
    }
    printf("\n");

     printf("showing odd in range\n");
    for(i=j;i>=k;i--)
    {
        if(i%2 !=0)
        {
        printf("%d ",i);
        }
    }
        printf("\n");
  }	
