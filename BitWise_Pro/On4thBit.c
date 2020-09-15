/*
accept Number from usser and one mask in mask set 4th bits on displat results
iNo = 12   -> bitwise    0x0000000c;
imask = ------------>	 0x00000010;
iresult = iNo | imask;  -> 0x0000001c;
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CalBits(UINT iVal)
{
	UINT imask = 0x00000010;

	UINT iResult = 0;

	//use | bitwise to ON 

	iResult = iVal | imask;
	
	return iResult;

}


int main()
{
		UINT iNo = 0;
		UINT iResult = 0;

		printf("Enter a value: ");
		scanf("%d",&iNo);
		iResult = CalBits(iNo);

		printf("After 4th bits on %d\n",iResult);

		return 0;
}