/*
accept one num from user and display its binary
input: 15
output: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1

*/


#include<stdio.h>

void displayBin(int iVal)
{
	if(iVal < 0)
	{
		return;
	}
	
	int i = 0;
	int arr[32] = {0};

	while(i < 32) //filling array with bits
	{
		if(iVal % 2 == 1)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}

		i++;
		iVal = iVal/2;
	}
	printf("\n");
	////////////////////////////

	i = 31;
	while( i >= 0) //displaying array with stored bits
	{
		printf("%d ", arr[i]);
		i--;
	}
	printf("\n");
	
}

int main(int argc, char const *argv[])
{
	int iNo = 0;
	printf("Enter decimal value :");
	scanf("%d",&iNo);

	displayBin(iNo);

	return 0;
}
