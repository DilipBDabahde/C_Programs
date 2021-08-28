
#include<stdio.h>

void bubbleSort(int*, int);
void display(int*, int);

int main()
{
	int arr[] = {5, 22, 8, 90, 2, 65, 43};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//call to sort array using BUBBLE-SORT
	printf("before bubble sort : ");
	display(arr, size);

	bubbleSort(arr, size);
	
	printf("After bubble sort : ");
	display(arr, size);	
	
	return 0;
}


/*
this below function help to sort integer array in ascending order using bubble sort technique
in this sorting algorith there are two loops 
first loop allocats itertion and second loops check pair of two elements, if a element is found small then a element then swap it
or skip,  
*/
void bubbleSort(int arr[], int size)
{
	int i = 0, j = 0, temp = 0;
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size-i-1; j++)
		{
			//checking element small if found then swap
			if(arr[j] > arr[j+1])
			{
				//swapping elements
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}



//helper function to display elements of array
void display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
