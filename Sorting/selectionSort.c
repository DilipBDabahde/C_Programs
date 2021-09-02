/*
write a program to implement selection sort



*/

#include<stdio.h>

void selectionSort(int brr[], int size)
{
	int i =0, j =0, min = 0, temp = 0;
	
	for(i = 0; i < size - 1; i++)
	{
		min = i;
		
		for(j = i + 1; j < size; j++)
		{
			if(brr[j] < brr[min])
			{
				min = j;
			}
		}
		
		temp = brr[min];
		brr[min] = brr[i];
		brr[i] = temp;
	}	
	
	for(i = 0; i < size; i++)
	{
		printf("%d ",brr[i]);
	}
}

int main()
{
	int arr[] = {78, 32, 10, 111, 42, 55};
	selectionSort(arr, 6);

	return 0;
}
