/*
accept character from user display its binary
input: 'A'		= decimal value is 65  need to form binary of 65
output:	

*/
#include<stdio.h>


typedef unsigned int UINT;

void displayCharBin(char ch)
{
	int iDec = ch;

	printf("Given character is: %c\n",ch);
	printf("Decimal value is  : %d\n", iDec);

	int arr[32] = {0};
	int i = 0;

	//filling array with binary values 
	for(i = 0; i < 32; i++, iDec /= 2)
	{
		if(iDec % 2 == 1)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}


	//displaying array 
	for(i = 31; i >= 0; i--)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
}


int main()
{
	
	char ich = '\0';

	printf("Enter a character :");
	scanf("%c",&ich);

	displayCharBin(ich);

	return 0;
}