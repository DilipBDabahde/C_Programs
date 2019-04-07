//accept input from user and printf no of {1 }  into binary of ginven num do this operation without % /
#include<stdio.h>

  int bitcount(int val);
  int main()
  {
    
     int ino=10;
     printf("Enter a num\n");
     scanf("%d",&ino);
     int iret=bitcount(ino);
 	
     printf("Here is go----> %d\n",iret);
     
     
     return 0;
 
  }
  
  
  int bitcount(int val)
  {
     int i,result=0;
     int imask=1,icnt=0;
     
     for(i=1;i<32;i++)
    {
      
       result=val & imask;
       
       if(result==imask)
      {
        icnt++;
      }
      imask=imask<<1;
    }
     return icnt;
  }
