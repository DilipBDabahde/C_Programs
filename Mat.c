#include<stdio.h>
 int main()
 
 
/* Creating this matrix which is very nice and i enjoyied
Enter a num:5
					*         * 
					  *     *   
					    * *     
					    * *     
					  *     *   
					*         * 

 */

 {
    int i=0,j=0,n=0;
    
    printf("Enter a num:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=n;j++)
       {
         if(i==j || i+j==n)
         {
          printf("* ");
         }
         
         else
         printf("  ");
       }
       printf("\n");
    }  
    }
