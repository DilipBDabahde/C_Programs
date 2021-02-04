/*
accept array from user and reverse it without using third variable

input:
		arr[] = {11,22,33,44,55,66,77,88,99}
		

output:
		arr[] = {99, 88, 77, 66, 55, 44, 33, 22, 11}
*/


#include<stdio.h>

void displayArray(int arr[], int isize)
{
	for(int i = 0; i < isize; i++)
	{
		printf("%d ",arr[i]);
	}
}


void rev_Array(int brr[], int isize)
{
	int i = 0, j = 0;
	//swap array elements in place
	for(i = 0, j = isize-1;  i < j; i++, j--)
	{
		brr[i] = brr[i] + brr[j];
		brr[j] = brr[i] - brr[j];
		brr[i] = brr[i] - brr[j];
	}		
}

int main()
{
	
	
	int arr[] =  {11,22,33,44,55,66,77,88,99};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	printf("Before reverse : ");
	displayArray(arr, size);
	printf("\n");
	
	rev_Array(arr, size);
	
	printf("After reverse  : ");
	displayArray(arr, size);
	printf("\n");
	
	
	return 0;
}
