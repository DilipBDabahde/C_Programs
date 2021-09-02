/*
wap to implements quickSort
*/



#include<stdio.h>


void quickSort(int[], int, int);
void output(int[], int);


int main()
{
	int arr[] = {4, 83, 22, 1, 44, 90, 32};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	output(arr, size);
	quickSort(arr, 0, size);
	output(arr, size);
	
	return 0;
}



void output(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}


void quickSort(int arr[], int low1, int high1)
{
	int temp, key, low2, high2;
	low2 = low1;
	high2 = high1;
	key = arr[(low2 + high2)/2];
	
	do
	{
		while(key > arr[low2])
		{
			low2++;
		}
		
		while(key < arr[high2])
		{
			high2--;
		}
	
		if(low2 <= high2)
		{
			temp = arr[low2];
			arr[low2++] = arr[high2];
			arr[high2--] = temp;
		}
	}while(low2 <= high2);
	
	if(low1 < high2)
	{
		quickSort(arr, low1, high2);
	}
	
	if(low2 < high1)
	{
		quickSort(arr, low2, high1);
	}
}




