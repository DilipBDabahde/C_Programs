//accept matrix from usr and print below pattern
   //////////////////////////////////////////////////////////////////////////////////////////////// 
                          /*
* s s s s s s s 
@ * $ $ $ $ $ $         to print this mathix us bellow sysnax
@ Q * 0 0 0 0 0 
@ Q 0 * 0 0 0 0 
@ Q 0 0 * 0 0 0 
@ Q 0 0 0 * 0 0 
@ Q 0 0 0 0 * 0 
@ Q 0 0 0 0 0 *    */
 
#include<stdio.h> 

int main()
 
 {   
 
    int i=0,j=0,n=0;           
    printf("Enter a num:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=n;j++)
      {
        if(i==j)
         {
          printf("* ");         
         }
         else if(j+i==j)
         {
          printf("s ");
         }
         else if(i+j==i)
         {
           printf("@ ");
         }
         else if(i*j==i)
         {
           printf("Q ");
         }
         else if(j*i==j)
         {
           printf("$ ");
         }
         else 
         printf("0 ");
      }
      printf("\n");
    }
       
 
 }
