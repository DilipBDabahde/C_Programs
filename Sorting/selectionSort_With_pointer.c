/*
wap to sort array elemenets using SELECTION SORT ALGO technique


input :int arr[] = {5, 22, 8, 90, 2, 65, 43};
output:	    2 5 8 22 43 65 90 
*/


#include<stdio.h>

void selectionSort(int*, int*);
void display(int*, int*);



int main()
{
	int arr[] = {5, 22, 8, 90, 2, 65, 43};
	//int arr[] = {1291, 897, 4566, 1232, 80, 700};

	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("before selection sort : ");
	display(arr, &size);

	selectionSort(arr, &size);

	printf("after selection sort : ");
	display(arr, &size);
	
	return 0;
}


//display array elements
void display(int brr[], int *size)
{
	for(int i = 0; i < *size; i++)
	{
		printf("%d ",*(brr+i));
	}
	printf("\n");
}


//sort array using selection sort algo tech
void selectionSort(int *p, int *size)
{
	int i = 0, j = 0, ismall = 0, itemp = 0;
	
	
	for(i = 0; i < *size-1; ++i)
	{
		ismall = i;
		
		for(j = i + 1; j <= *size; j++)
		{
			//get smallest elements index into ismall ptr
			if(*(p+j) < *(p+ismall))
			{
				ismall = j;
			}
		}
		
		///swap elements
		itemp = *(p+ismall);
		*(p+ismall) = *(p+i);
		*(p+i) = itemp;	
	}
}


