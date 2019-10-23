/*

Accept Num from user and print Collatz Sequence
input: 3
output: 10 5 16 8 4 2 1

input: 
*/
#include<stdio.h>

int ColltzSer(int ival)
 {
 	if(ival % 2 == 0)
 	 {
 		return ival/2; 
 	 }
 	 else
 	 {
 	 	return 3*ival+1;
 	 } 
 }
 
 int main()
 {
	int Num=0;
	printf("Enter number to gets its Collatz series\n");
	scanf("%d",&Num);
	
	while(Num >= 1) 
    {
    	if (Num == 1)
		  {
		   	break;
    	  }
    	  
    	Num = ColltzSer(Num);
    	printf("%d ",Num);    
    } 
    printf("\n");
    return 0;
 }
