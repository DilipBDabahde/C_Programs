/* 
accept range from user and display strong numbers from that range
input: 1 - 1000
output: 1 2 145
*/



#include<stdio.h>

void Dis_Strong_Num(int start, int end)
 {
 	int strNum = 0, temp=0,ifact=1, icnt = 0,digit=0,sum=0;
 	
 	while(start <= end)
 	{
 		icnt = start;
 		while(icnt != 0)
 		{
 			digit = icnt % 10;
 			
 			while(digit != 0)
 			{
 				ifact = ifact * digit;
 				digit--;
 			}
 			sum = sum + ifact;
 			ifact = 1;
 			icnt = icnt / 10;
 		}
 		 
 		if(sum == start)
 		{
		 printf("%d ",start); 		
 		}
 		sum=0; 		
 		start++;
 	} 	 
 }
 

int main()
 {
 
 	int lower=0,upper=0;
 	printf("Enter Starts point: ");
 	scanf("%d",&lower);
 	
 	printf("Enter Ends point:");
 	scanf("%d",&upper);
 	
 	Dis_Strong_Num(lower,upper);
	printf("\n"); 	 
 return 0;
 }
