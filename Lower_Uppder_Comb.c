/*
Accept number from user and return newly formed number which contains all digits in increasing order.

Input  : 61756151
Output : 11155667

Input  : 67807653
Output : 3566778
*/

#include<stdio.h>

int Lower_To_Upper(int iNo)
 {
   int ihold=0,idigit=0,irev=0,itemp=iNo,i=0;
   
 	while( i < 10)
 	{
 	   iNo = itemp;
 	   while(iNo != 0)
 		{
 			idigit = iNo % 10;
 			if(idigit == i)
			{
			 irev = irev*10+i;			
			} 		
			iNo /=10;
 		}
 		i++;		
 	} 	 
 	return irev;
 }
 
 
 int main()
 {
 
  int ival = 0;
  int res = 0;
  
  printf("Enter a num: ");
  scanf("%d",&ival);
  
  res=Lower_To_Upper(ival);
  printf("lower to uppper found: %d\n",res);
 
  return 0;
 }
