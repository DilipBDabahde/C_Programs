/*
Accept two numbers from user and check whether that numbers is anagram or
not.
Anagram numbers are such a numbers which contains same digits in same
frequency but may be in different order.
Input  : 67523 57632
Output : Numbers are Anagram
Input  : 277523 732752
Output : Numbers are Anagram
Input  : 277523 732782
Output : Numbers are not Anagram
*/

#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0

typedef int BOOL;


BOOL ChkAnagramNum(int iNo1,int iNo2)
 {
 	
 	int len1=0;
 	int len2=0; 
 	int arr[10]={0};
    int brr[10]={0};
    int temp1=iNo1,temp2=iNo2,icnt=0;
 
 	while(iNo1 != 0)
 	{
 		len1++;	
 		iNo1 /=10; 	
 	}
 	
 	while(iNo2 != 0)
    {
   		len2++;
   		iNo2 /=10; 
    }
        
    //printf("%d %d\n",len1,len2);
	if(len1==len2)
	{
        while((temp1 != 0) && (temp2 != 0))	
        {
	    	arr[temp1%10]++;
	   		brr[temp2%10]++;
	   		//printf("%d%d ",arr[temp1%10],brr[temp2%10]);
	    	temp1 /=10;
	    	temp2 /=10;	
	    }
	    printf("\n");
	    for(int i = 0;i < 10; i++)
	    {
	       //printf("%d%d ",arr[i],brr[i]);
	       if((arr[i] == brr[i]) && arr[i] > 0)
	       {
	       	 icnt = icnt + arr[i];
	       }
	    }
	    
	   // printf("\n%d icnt\n",icnt);
	    if(icnt == len1)
	    {
	    	return True;
	    }
	    else
	    {
	   	  return False; 
	    }
	}
	else
	{
	  printf("Given input is invalid\n");	
	}
 
 }
 
 int main()
 {
   int ival1=0;
   int ival2=0;
   printf("Enter first num:");
   scanf("%d",&ival1);
   
   printf("Enter second num:");
   scanf("%d",&ival2);
   
   BOOL Result = ChkAnagramNum(ival1,ival2);
   if(Result == True)
   {
   	printf("Given number is anagram\n");
   }
   else
   {
    printf("Given number is-not anagram\n");
   }  
 
 return 0;
 }
