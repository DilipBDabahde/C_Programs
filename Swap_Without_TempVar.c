/*
accept two value from user and swap then without temp var

input:
		a = 10;
		b = 20;
		

output:
		a = 20;
		b = 10;
*/

#include<stdio.h>

void swap(int a, int b)
{
	printf("before swap a %d : b %d\n",a, b);
	a = a + b;	  // a:30 = a:10 + b:20
	b = a - b;    // b:10 = a:30 - b:20
	a = a - b;    // a:20 = a:30 - b:10

	printf("after swap a %d : b %d\n",a, b);	
}

int main()
{

	int x = 10;
	int y = 20;
	
	swap(x, y);
	
	return 0;
}
