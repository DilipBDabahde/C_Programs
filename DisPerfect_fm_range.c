	//accept rannge from user and display perfect num from that range

	// input: 1 to 50   output:6 28

	#include<stdio.h>
	 		
	void DisPerfect(int istart,int iend)
	 { 
	  
	  if(istart>iend)
	  {
	   return;
	  }
	  if(istart<0 || iend<0)
	  {
	   return;
	  }
	   
	  int icnt=0,isum=0,iNo=0;
	  
	  for(iNo=istart;iNo<=iend;iNo++)
	  {
	    for(icnt=1,isum=0;icnt<=iNo/2;icnt++)
	    {
	       if((iNo%icnt)==0)
	       {
		  isum+=icnt;
	       }	       
	    }      
	    if(isum==iNo)
	     {     
	      printf("this is perfect	 %d\n",isum);
	     }  
	  } 
	 
	 }
	 
	 int main()
	 {
	  int ival1=0,ival2=0;
	  printf("Enter range\n");
	  scanf("%d %d",&ival1,&ival2);
	  DisPerfect(ival1,ival2);
	  
	  return 0;
	 }
