/*
write a program to show use of recursion with two calls
*/

#include<stdio.h>

void recursionShow()
{
	static int i = 1;
	
	if(i++ < 3)
	{
	
		printf("%d : before\n",i);
		recursionShow();
		
		printf("%d : afters\n",i);
		recursionShow();
	}
}

int main()
{

	recursionShow();

	return 0;
}	
