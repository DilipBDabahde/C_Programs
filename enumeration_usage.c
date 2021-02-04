/*
accept number from user and check that number is even-odd

input:
		11
output: Odd

input: 22

output:	Even

enum is keyword to create user define type as struct keyword
*/


#include<stdio.h>

//creating enumeration with two members 0 1
enum Boolean{ false, true,};

enum Boolean  CheckEvenOdd(int iVal)  //enum Boolean  is user defined type
{	
	if(iVal % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter a Number: ");
	scanf("%d",&iNo);
	
	enum Boolean result  = CheckEvenOdd(iNo);
	
	if(result == true)
	{
		printf("%d is Even\n", iNo);
	}
	else
	{
		printf("%d is Odd\n", iNo);
	}
	
	return 0;
}
