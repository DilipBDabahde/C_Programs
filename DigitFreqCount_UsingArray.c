/*
Accept one numbers from user and display frequency of each digit.
Input : 543457
Output :3 -> 1
		4 -> 2
		5 -> 2
		7 -> 1		
*/

#include<stdio.h>

void DigitFreq(int iNo)
{
	int icnt=0,isum=0,idigit=0,ival=0,itemp=iNo;
	
	while(iNo != 0)
	{
		ival++;
		iNo /= 10;	
	}
	
	
	int arr[10]={0};
	iNo = itemp;
	while(iNo != 0)
	{
		idigit = iNo % 10;
		arr[idigit]++;
		iNo = iNo / 10;	
	}
	
	for(int i = 0; i<10;i++)
	{		
	 if(arr[i]>0)
	 {
	  printf("%d %d\n",i,arr[i]);		
	 }
	} 	
}


int main()
 {
   
   int ival = 0;
   printf("Enter a val: ");
   scanf("%d",&ival);
   
   DigitFreq(ival);
  return 0; 
 }
