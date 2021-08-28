/*
wap to sort array using bubble sort algorithm

input :int arr[] = {5, 22, 8, 90, 2, 65, 43};
output: 2 5 8 22 43 65 90 

*/


#include<stdio.h>

//sort without array 
void bubbleSort(int *p, int *size)
{
	int i = 0, j = 0, temp = 0;
	
	for(i = 0; i < *size; i++)
	{
		for( j = 0; j < *size-i-1; j++)
		{
			if(*(p+j) > *(p+(j+1)))
			{
				temp = *(p+j);
				*(p+j) = *(p+(j+1));
				*(p+(j+1)) = temp;
			}
		}
	}
}

//display without array
void display(int *arr, int *size)
{
	for(int i = 0; i < *size; i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

int main()
{
	int arr[] = {5, 22, 8, 90, 2, 65, 43};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Before bubble Sort : ");
	display(arr, &size);
	
	bubbleSort(arr,&size);
	
	
	printf("After bubble Sort : ");
	display(arr, &size);	
	
	return 0;
}
