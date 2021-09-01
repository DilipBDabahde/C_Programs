/*
wap a program to sort character array in ascending order

input:		hello 

output:	ehllo


input:		Hello
output:	Hello

*/

#include<stdio.h>

//function prototype
void bubbleSort(char*, int);
void display(char*, int);


//function definition
int main()
{
	char arr[] = "Hello";
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("before bubble sort: ");
	display(arr, size);
	
	bubbleSort(arr, size);
	
	printf("after bubble sort: ");
	display(arr, size);

	return 0;
}


void bubbleSort(char brr[], int size)
{
	int i = 0, j = 0;
	char temp = '\0';
	
	for(i = size-1; i >= 0; --i)
	{
		for(j = 0; j  <= i-1 ; j++)
		{
			if(brr[j] > brr[j+1])
			{
				temp = brr[j];
				brr[j] = brr[j+1];
				brr[j+1] = temp;
			}
		}
	}
}



void display(char brr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%c ",brr[i]);
	}
	printf("\n");
}


