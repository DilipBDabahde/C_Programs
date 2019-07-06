/*
Q5.Write a recursive program which accept number from user and display below pattern. (Don’t use any loop)
Input : 8
Output :
	1 2 3 4 5 6 7 8 
	1 2 3 4 5 6 7 
	1 2 3 4 5 6 
	1 2 3 4 5 	
	1 2 3 4 
	1 2 3 
	1 2 
	1
	1 
	1 2 
	1 2 3 
	1 2 3 4 
	1 2 3 4 5 
	1 2 3 4 5 6 
	1 2 3 4 5 6 7 
	1 2 3 4 5 6 7 8
*/	

#include<stdio.h>

  void pattern(int iNo)
 {
   
    static int temp=0,x=0,i=1,j=1;
    if(i==1)
    {
      temp=iNo;
    }
    
    if(i <= iNo*iNo+(iNo-2))      
    {
    
     if(j<=temp && x==0)  
     {
       printf("%d ",j++);     
     }
     
     if(j>temp && x==0)
      {
        printf("\n");
        j=1;
        temp--;
       
       if(j==1 && temp==1)
        {
         printf("%d\n",j);
         x++;
        }
      }
      
      if(j<=temp && x!=0)
      {
         printf("%d ",j++);      
      }
      if(j>temp && x!=0)
      {
       printf("\n");
       j=1;
       temp++;      
      }
      i++;      
      pattern(iNo);   
    }
}


int main()
 {
    int ival=0;
    printf("Enter a value:");
    scanf("%d",&ival);
    pattern(ival);
    
    return 0;
 }
