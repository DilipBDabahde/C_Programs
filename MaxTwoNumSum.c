/*
accept three nums from user and perform addition of max two nums
input: 9 12 84
output: 96

input: 84 12 9
output:
	   96

input:	12 84 9
output:
	    96
*/


#include<stdio.h>

int main()
{
	int  a, b, c;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("Enter third number: ");
	scanf("%d",&c);
	
	if(a > c && b > c)	
	{
		printf("Sum of max two nums is: %d\n", a + b);
	}
	else if(b > a && c > a)
	{
		printf("Sum of max two nums is: %d\n", b + c);
	}
	else
	{
		printf("Sum of max two nums is: %d\n", a + c);
	}
	
	return 0;
}
