#include<stdio.h>
#include<stdlib.h>
 int TwoD()
 {
 
   int **ptr;
   int i,j,Row,Col;
   
   printf("Enter Row & Cal val:"); 
   scanf("%d %d",&Row,&Col);
   
   ptr=(int **)malloc(sizeof(int)*Row);
   
   //printf("%ld\n",sizeof(ptr));
   
   for(i=0;i<Row;i++)
   {
   ptr[i]=(int*)malloc(sizeof(int)*Col);
   }
   
   printf("enter elets in array\n");
   for(i=0;i<Row;i++)
   {
    for(j=0;j<Col;j++)
    {
       scanf("%d",&ptr[i][j]);
    }   
   }
    
     printf("\n Yoou given elemts in arrray are\n");
     for(i=0;i<Row;i++)
     {
       for(j=0;j<Col;j++)
       {
         printf("%d ",ptr[i][j]);
       }
     }    	
 	
 }  
 
 int main()
 {
   TwoD();
 }
