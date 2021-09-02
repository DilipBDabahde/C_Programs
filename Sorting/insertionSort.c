/*
WAP to sort array using insertion sort algo tech
*/

#include<stdio.h>

void insertionSort(int*, int);
void display(int*, int);

int main()
{
	int arr[] = {47, 54, 6, 25, 88, 66, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Before insertionSort : ");
	display(arr, size);
	
	//sort array
	insertionSort(arr, size);
		
	printf("After insertionSort : ");
	display(arr, size);
	

	return 0;
}


void display(int brr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",brr[i]);
	}
	printf("\n");
}


//sort array using insertion sort algo
void insertionSort(int brr[], int size)
{
	//req vars
	int i =0, j =0, value = 0;
	
	for( i = 1; i <= size-1; i++)
	{
		value = brr[i];
		j = i;
		
		while(brr[j-1] > value && j >= 1)
		{
			brr[j] = brr[j-1];
			j--;
		}
		brr[j] = value;
	}
}
