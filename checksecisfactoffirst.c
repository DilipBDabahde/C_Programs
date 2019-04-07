//accept two num from user and check second num is factor of first number
//checksecisfactoffirst.c
#include<stdio.h>

int main()
 {
 
    int no1,no2;
    
    printf("Enter two nums:\n");
    scanf("%d%d",&no1,&no2);
 
       
       if(no1%no2==0)
       { printf("--------------------\n");
         printf("%d is factor of %d\n",no2,no1);
         printf("--------------------\n");
         printf("TRUE\n");         
        
       }
       else
       { printf("--------------------\n");
         printf("%d is not factor of %d\n",no2,no1);
         printf("--------------------\n");
         printf("FALSE\n");
        
       }
   
 }  
