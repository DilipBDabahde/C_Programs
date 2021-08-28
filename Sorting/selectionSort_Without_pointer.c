/*
wap to sort array elements using selection sort algorithm technique

input :int arr[] = {5, 22, 8, 90, 2, 65, 43};
output: 2 5 8 22 43 65 90 
*/

#include<stdio.h>

void selectionSort(int arr[], int);
void display(int arr[], int);

int main()
{

	int arr[] = {5, 22, 8, 90, 2, 65, 43};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("before selection sort : ");
	display(arr, size);
	
	selectionSort(arr, size);
	
	printf("after selection sort : ");
	display(arr, size);
		
	return 0;
}

void display(int brr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", brr[i]);
	}
	printf("\n");
}


void selectionSort(int brr[], int size)
{
	int i = 0, j = 0, temp = 0, ismall = 0;
	
	for(i = 0; i < size-1; i++)
	{
		ismall = i;  
		
		for(j = i+1; j <= size; j++)
		{
			//if true then update ismall
			if(brr[j] < brr[ismall])
			{
				ismall = j;
			}
		}
		
		//swap
		temp = brr[ismall];
		brr[ismall] = brr[i];
		brr[i] = temp;
	}
}
