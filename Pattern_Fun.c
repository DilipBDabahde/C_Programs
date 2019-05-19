/*accept input from user and print given pattern 
input:6
output:		1
		2  1
		4  2  1 
		8  4  2  1
		16 8  4  2  1
		32 16 8  4  2 1
*/

#include<stdio.h>

void Patterfun(int iNo)
 {
   int irow=0,icol=0,i=0,j=0,temp1=2,temp2=0;
   
   if(iNo<0)
    {
     iNo=-iNo;
    }
   
   irow=icol=iNo;
   
   for(i=1;i<=irow;i++)
    {
      
      for(j=i;j>=1;j--)
       {
         
         if(j==1)
         {
           printf("%d\t",j);
         }                  
         else if(j==2)
         {
          printf("%d\t",j);
         }
         else
         {
           temp1=temp1*2;
           temp2=temp1;
           while(temp1>2)
            {
              printf("%d\t",temp1);
              temp1=temp1/2;
              if(temp1>2)
              {
               j--;
              }
            }
            temp1=temp2;        
         }       
       }
       printf("\n");
    } 
 }
 
 int main()
  {
    int val=0;
    printf("Enter value:");
    scanf("%d",&val);
    Patterfun(val);    
  return 0;
  }
